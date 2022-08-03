
// struct MyHash{
//     int BUCKET;
//     list<int> *table;
//     MyHash(int b){
//         BUCKET = b;
//         table = new list<int>[b];
//     }

//     void insert(int key){
//         int i = key%BUCKET;
//         table[i].push_back(key);
//     }

//     void search(){
//         cout<<"HI"<<endl;
//     }

//     void remove(int key){
//         int i = key%BUCKET;
//         table[i].remove(key);
//     }

// };