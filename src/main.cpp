#include "paddleBox.h"

#include <QApplication>
#pragma comment(lib, "user32.lib")

#include "opencv2/core.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#include <iostream>
#include <vector>

#include <include/args.h>
#include <include/paddleocr.h>
#include <include/paddlestructure.h>

int main(int argc, char **argv) {
  // Parsing command-line
  QApplication a(argc, argv);
  paddleBox w;
  w.show();
  return a.exec();
 
}
