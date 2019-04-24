#include <cstdlib>
#include <cmath>
#include <iostream>
#include "bot.h"

using namespace std;

const int MAX_ROWS = 40;
const int MAX_COLS = 40;
const int MAX_NUM = 10;

int ROWS;  // global variables
int COLS;
int NUM;
int rr, cc;

/* onStart:
An Initialization procedure called at the start of the game.
You can use it to initialize certain global variables, or do
something else before the actual simulation starts.
Parameters:
    rows: number of rows
    cols: number of columns
    num:  number of dwarfs
    log:  a cout-like log */

void onStart(int rows, int cols, int num, std::ostream &log) {
  log << "Start!" << endl; // Print a greeting message

  ROWS = rows; // Save values in global variables
  COLS = cols;
  NUM = num;
}

/* onAction:
A procedure called each time an idle dwarf is choosing
their next action.
Parameters:
    dwarf:   dwarf choosing an action
    day:     day (1+)
    hours:   number of hours in 24-hour format (0-23)
    minutes: number of minutes (0-59)
    log:     a cout-like log  */

double distance(int rdwarf, int cdwarf, int rtree, int ctree) {
  int difr = rdwarf - rtree;
  int difc = cdwarf - ctree;
  int sqrow = pow(difr, 2);
  int sqcol = pow(difc, 2);
  int sum = sqrow + sqcol;
  return sqrt(sum);
}

void find_pine(Dwarf &dwarf) {
  int r = dwarf.row();
  int c = dwarf.col();
  double dis = 10000;
  for(int i = 1; i < ROWS; i++) {
    for(int j = 1; j < COLS; j++) {
      if(dwarf.look(i, j) == PINE_TREE){
        if(distance(r, c, i+1, j) < dis && dwarf.look(i+1, j) != PINE_TREE) {
          dis = distance(r, c, i+1, j);
          rr = i+1;
          cc = j;
        }
        if(distance(r, c, i-1, j) < dis && dwarf.look(i-1, j) != PINE_TREE) {
          dis = distance(r, c, i-1, j);
          rr = i-1;
          cc = j;
        }
        if(distance(r, c, i, j+1) < dis && dwarf.look(i, j+1) != PINE_TREE) {
          dis = distance(r, c, i, j+1);
          rr = i;
          cc = j+1;
        }
        if(distance(r, c, i, j-1) < dis && dwarf.look(i, j-1) != PINE_TREE) {
          dis = distance(r, c, i, j-1);
          rr = i;
          cc = j-1;
        }
      }
    }
  }
}

void onAction(Dwarf &dwarf, int day, int hours, int minutes, ostream &log) {
  // Get current position of the dwarf
  int r = dwarf.row();
  int c = dwarf.col();

  // Look if there is a tree on the right from the dwarf
  if (dwarf.look(r, c+1) == PINE_TREE) {
    // If there is a pine tree, chop it
    log << "Found a tree -- chop" << endl;
    dwarf.start_chop(EAST);
    return;
  }else if(dwarf.look(r, c-1) == PINE_TREE) {
    log << "Found a tree -- chop" << endl;
    dwarf.start_chop(WEST);
    return;
  }else if(dwarf.look(r+1, c) == PINE_TREE) {
    log << "Found a tree -- chop" << endl;
    dwarf.start_chop(SOUTH);
    return;
  }else if(dwarf.look(r-1, c) == PINE_TREE) {
    log << "Found a tree -- chop" << endl;
    dwarf.start_chop(NORTH);
    return;
  }
  else {
    find_pine(dwarf);
    log << "Walk to " << rr << " " << cc << endl;
    dwarf.start_walk(rr, cc);
    return;
  }
}
