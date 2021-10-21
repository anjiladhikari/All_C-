#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
// FILE* fptr_read , *fptr_write;

 class circle
 {
     float radius ;
     public:
    void read_data()
  {
      cout << " enter the radius of the circle " ;
      cin >> radius ;
      //fscanf(fptr_read , "%f" , &radius);
  }
  public:
 void show_data ( )
  {
      float area = (  3.17 * radius*radius );
      cout << "area of circle " << area << endl ;
      float primeter = (2*3.17* radius);
      cout << "perimeter of circle " << primeter << endl ;

  }

 } ;
 class rectangle
 {
     float lenght,breadth ;
     public:
  void read_data()
  {

      cout << " enter the length ad breadth " ;
      cin >> lenght >> breadth ;
      //fscanf(fptr_read , "%f:%f" , &lenght , &breadth);
  }
 void  show_data ()
  {
      float area = ( lenght * breadth );
      float perimeter = (lenght + breadth );
      cout << " area of rectangle " << area << endl ;
      cout << " perimeter of rectangle " << perimeter << endl ;
  }


 } ;
 class triangle
 {
     float a , b , c ;
     public:
  void read_data()
  {

      cout << " enter the 3 sides of   triangle " ;
      cin >> a >> b >> c ;
      //fscanf(fptr_read , "%f:%f:%f" , &a , &b , &c);

  }
 void show_data ( )
  {
    if( a + b > c && a + c > b && b + c > a ) // for check  it is triangle or not
      {
      float perimeter = (a + b + c ) , s ;

      //fprintf(fptr_write , "Perimeter of Rectangle : %f\n" , perimeter);
      cout << " perimeter of rectangle " << perimeter << endl  ;
       s = perimeter/2.0 ;
      float area = s*(pow(s * (s - a) * (s - b) * (s - c) , 0.5)) ;
      cout << " area of rectangle " << area << endl ;
      //fprintf(fptr_write , "Area of Rectangle : %f\n" , area);

      }
   else
        //fprintf(fptr_write , "The sides of the triangle are invalid\n");
      cout << "by this sides triangle can not be formed" << endl ;

  }

 } ;


int main()
{
    //fptr_read = fopen("input.txt" , "r");

    //fptr_write = fopen("output.txt" , "w");

    circle c1    ;
    rectangle  r1 ;
    triangle  t1  ;
    c1.read_data();
    c1.show_data( );
    r1.read_data();
    r1.show_data();
    t1.read_data();
    t1.show_data();

   // fclose(fptr_read);
   // fclose(fptr_write);

}
