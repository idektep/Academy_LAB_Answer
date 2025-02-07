//------------------------------------------------------------------AGV Control Function -----------------------------------------------------------------------------//
void processAGVMovement(String inputValue) {
  //Serial.printf("Got value as %s %d\n", inputValue.c_str(), inputValue.toInt());
  switch (inputValue.toInt()) {
    case UP:
      forward(10);
      break;
    case DOWN:
      backward(10);
      break;
    case LEFT:
      slide_left(10); 
      break;
    case RIGHT:
      slide_right(10);
      break;
    case UP_LEFT:
      slide_left_forward(10);
      break;
    case UP_RIGHT:
      slide_right_forward(10);
      break;
    case DOWN_LEFT:
      slide_left_backward(10);
      break;
    case DOWN_RIGHT:
      slide_right_backward(10);
      break;
    case TURN_LEFT:
      turn_left(10);
      break;
    case TURN_RIGHT:
      turn_right(10);
      break;
    case STOP:
      stop(10);
      break;
    default:
      stop(10);
      break;
  }
}

