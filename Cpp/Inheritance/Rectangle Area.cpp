//Rectangle Area.cpp
class Rectangle{
    public:
       int width;
       int height;
       Rectangle() {}
       Rectangle(int a,int b){width=a;height=b;}
       void Display(){
           cout<<width<<" "<<height<<endl;
       }
};
class RectangleArea : public Rectangle{
    public:
       void Input(){cin>>Rectangle::width>>Rectangle::height;}
       void Display(){
          cout<<width*height<<endl;
       }
        //Write your code here.
};
