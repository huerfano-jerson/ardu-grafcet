//============================================================================
// Name        : Transition.h
// Author      : Jerson Leonardo Huerfano Romero
// Version     : 1.0.1
// Copyright   : Copyright (C) 2018 Jerson Huerfano
// Description : Implements a grafcet transition.
//============================================================================

#ifndef TRANSITION_H_
#define TRANSITION_H_

class Transition{
private:
  // on sync association, multiple parents are allowed
  // and must be active to evaluate the predicate.
  int * parentIndices;
  int parentCount;
  // On sync association, multiple subsequent stages are allowed.
  int * childrenIndices;
  int childrenCount;
public:

  Transition(int * indices, int parentCount, int childrenCount);
  virtual ~Transition();

  int getChildrenCount() const;
  int* getChildrenIndices() const;
  int getParentCount() const;
  int* getParentIndices() const;
};

#endif
