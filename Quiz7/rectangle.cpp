private:
    Coordinate lb;
    Coordinate rt;
    Coordinate center;
    double area;

public:
    Rectangle::Rectangle(): lb(0), rt(0), center(0), area(0)
    {

    }
    Rectangle::Rectangle(Coordinate lbval, Coordinate rtval) : lb(lbval), rt(rtval)
    {

    }
    Coordinate Rectangle::getLB() const
    {
      return lb; 
    }
    Coordinate Rectangle::getRT() const
    {
      return rt; 
    }
    double Rectangle::getArea()
    {
      double xDifference = rt.getX() - lb.getX(); 
      double yDifference = rt.getY() - lb.getY(); 
      double area =xDifference * yDifference; 
      return area; 
    }
    Coordinate Rectangle::getCenter()
    {
      double xCenter = (rt.getX() - lb.getX())/2; 
      double yCenter = (rt.getY() - lb.getY())/2; 
    }
    void setLBRT(Coordinate lbval, Coordinate rtval);
    void printRectangle() const;
};