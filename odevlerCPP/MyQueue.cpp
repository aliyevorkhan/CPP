#include <iostream>
#define N 10
using namespace std;

class MyQueue{
    private:
        int items[N];
        int readPointer;
        int writePointer;
        int capacity;
        int itemCount;
    public:
        /// Constructor declared here;
        MyQueue(){
            readPointer  = 0;
            writePointer = 0;
            itemCount    = 0;
            capacity     = N;
        }

        ///Setters declare here

        void setReadPointer(int rp){
            if(itemCount == 0){
                readPointer = rp;
            }
        }
        void setWritePointer(int wp){
            writePointer = wp;
        }
        void setCapacity(int c){
            capacity = c;
        }


        ///Getters declare here

        int getReadPointer(){
            return readPointer;
        }
        int getWritePointer(){
            return writePointer;
        }
        int getCapacity(){
            return capacity;
        }
        int getItemCount(){
            return itemCount;
        }

        ///Methods declare here

        void append(int a){
            if(itemCount < capacity){
                items[writePointer] = a;
                writePointer = (writePointer + 1) % N;
                itemCount ++;
            }
        }

        int pop(){
            if(itemCount > 0){
                int i = items[readPointer];
                readPointer = (readPointer + 1) % N;
                itemCount --;
                return i;
            }else{
                return 0;
             }
        }
};


int main()
{
    MyQueue mq;

    mq.append(2);
    mq.append(5);
    mq.append(3);

    cout<<"Pop method working "<<mq.pop() << endl;

    mq.append(7);
    mq.append(9);
    mq.append(9);

    cout<< "Pop method working " <<mq.pop() << endl;
    cout<<"Item count: " <<mq.getItemCount()<<endl;

    return 0;
}
