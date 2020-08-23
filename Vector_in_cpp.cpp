#include <vector>
#include <iostream>
using namespace std;
int i,value;
void output(vector<int> v){
    for(auto i=v.begin();i!=v.end();i++)
        cout<<*i<<endl;
    // or
    for(i=0;i<v.size()-1;i++)
        cout<<v[i]<<endl;
}
//vector được hiện thực là một mảng liên tục,nó có thể truy xuất ngẫu nhiên. 
//Không những tối ưu về tốc độ truy xuất như mảng,thiết kế của vector còn cho phép 
//thêm và gỡ bỏ 1 phần tử 1 cách linh động.
//Note:vector có dạng giống như mảng nên các phần tử cx đc đánh dấu từ 0 đến n-1    
int main(){
    vector<int> v1; 
    v1.push_back(10);//namevector.push_back(value):thêm giá trị vào vector và mặc định là thêm vào cuối
    int len=v1.size();//kích thước của vector là số phần tử trong vector đó
    cout<<v1.front()<<endl;//gọi ra phần ử đầu tiên
    cout<<v1.back()<<endl;//gọi r phần tử cuối cùng
    cout<<v1.at(i)<<endl;//gọi ra phần tử bất kì tại vị trí i
    v1.pop_back();//xóa phần tử cuối cùng, lúc này size của vector tự động
    // co lại chỉ để đủ chỗ lưu cho các phần tử trong vector    
    v1.insert(v1.begin(),value);//chèn value vào vị trí v1.begin




}