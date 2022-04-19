class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
    void setLength(double l);
    void setWidth(double w);
    void setHeight(double h);
       // write prototypes of getters for length, width and height
    double getLength();
    double getWidth();
    double getHeight();
 
    int calcVolume();
};
