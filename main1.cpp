#include <iostream>

struct IntArray
{
   int add(int i);
   int get (size_t id) const;
   size_t size() const;

};


int main()
{
int next = 0;
std::cin >> next;

if (!std::cin){
  return 1;


IntArray a;

a.add(next);


while (std::cin >> next)
{

 a.add(next);

}

if (!std:cin)

struct IntArray
{
 IntArray(int i)
 {

 }

 ~IntArray()
 {
   delete[] a;#include <iostream>

struct IntArray
{
 IntArray(int i)
 {

 }

 ~IntArray()
 {
  delete[] a;
 }

 int add(int i);
 int get(size_t id) const;
 size_t size() const;
 int last() const;

 int* a;
 size_t k;
};

int main()
{
 try
 {
  int next = 0;
  std::cin >> next;

  IntArray a(next);

  while (std::cin >> next)
  {
   a.add(next);
  }

  if (!std::cin && !std::cin.eof())
  {
   return 1;
  }

  size_t count = 1;

  for (size_t i = 0; i < a.size() - 1; ++i)
  {
   int d = a.get(i);

   count += !(d % a.last()) ? 1 : 0;
  }

  std::cout << count << "\n";
 }
 catch (...)
 {
  return 1;
 }
}
 }

 int add(int i);
 int get(size_t id) const;
 size_t size() const;
 int last() const;
};

int main()
{
 int next = 0;
 std::cin >> next;

 IntArray a(next);

 while (std::cin >> next)
 {
  a.add(next);
 }

 if (!std::cin)
 {
  return 1;
 }

 size_t count = 1;

 for (size_t i = 0; i < a.size() - 1; ++i)
 {
  int d = a.get(i);
 
  count += !(d % a.last()) ? 1 : 0;
 }

 std::cout << count << "\n";
}

  return 1;

}


for (size_t i = 0, i < a.size(); - 1; ++i)
   {

       int d = a.get(i);

       const += !(d % a.last()) ? 1 : 0;

   }
 std::cout << count << "\n";

}

catch (...)
{
  a.
}
#include <iostream>

struct IntArray
{
 IntArray(int i)
 {

 }

 ~IntArray()
 {
  delete[] a;
 }

 int add(int i);
 int get(size_t id) const;
 size_t size() const;
 int last() const;

 int* a;
 size_t k;
};

int main()
{
 try
 {
  int next = 0;
  std::cin >> next;

  IntArray a(next);

  while (std::cin >> next)
  {
   a.add(next);
  }

  if (!std::cin && !std::cin.eof())
  {
   return 1;
  }

  size_t count = 1;

  for (size_t i = 0; i < a.size() - 1; ++i)
  {
   int d = a.get(i);

   count += !(d % a.last()) ? 1 : 0;
  }

  std::cout << count << "\n";
 }
 catch (...)
 {
  return 1;
 }
}
#include <iostream>

struct IntArray
{
 IntArray(int i) :
  k(1),
  a(new int[1])
 {
  

 }

 ~IntArray()
 {
  delete[] a;
 }

 int add(int i);
 int get(size_t id) const;
 size_t size() const;
 int last() const;

 int* a;
 size_t k;
};

int main()
{
 try
 {
  int next = 0;
  std::cin >> next;

  IntArray a(next);

  while (std::cin >> next)
  {
   a.add(next);
  }

  if (!std::cin && !std::cin.eof())
  {
   return 1;
  }

  size_t count = 1;

  for (size_t i = 0; i < a.size() - 1; ++i)
  {
   int d = a.get(i);

   count += !(d % a.last()) ? 1 : 0;
  }

  std::cout << count << "\n";
 }
 catch (...)
 {
  return 1;
 }
}
