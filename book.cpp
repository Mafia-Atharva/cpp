#include <iostream>
using namespace std;
class base
{
public:
  string title;
  float b_price;
};

class book: public base
{
public:
  int no_of_pages;
};

class tape: public book
{
public:
  float play_time;
    tape (string a, float b, int c, float d)
  {
    title = a;
    b_price = b;
    no_of_pages = c;
    play_time = d;
  }
};

int
main ()
{
   tape *tp1 = new tape ("aa", 200, 500, 2);
  tape *tp2 = new tape ("bb", 150, 300, 5);
  tape *tp3 = new tape ("cc", 500, 1300, 4);
  cout << "\nAuthor,price of book,number of pages,tape time=" << tp1->
    title << " " << tp1->b_price << " " << tp1->no_of_pages << " " << tp1->
    play_time;
  cout << "\nAuthor,price of book,number of pages,tape time=" << tp2->
    title << " " << tp2->b_price << " " << tp2->no_of_pages << " " << tp2->
    play_time;
  cout << "\nAuthor,price of book,number of pages,tape time=" << tp3->
    title << " " << tp3->b_price << " " << tp3->no_of_pages << " " << tp3->
    play_time;
  return 0;
}
