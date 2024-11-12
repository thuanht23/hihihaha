#include <iostream>
#include <string>
using namespace std;

class thisinh{
	private:
		string mathisinh;
		string hoten;
		float diemtoan;
		float diemly;
		float diemhoa;
	public:
		thisinh(){
			mathisinh = "";
			hoten = "";
			diemtoan = diemly = diemhoa = 0.0;
		thisinh(string mats, string hoten, float toan, float ly, float hoa){
		    mathisinh = mats;
		    hoten = hoten;
		    diemtoan = toan;
		    diemly = ly;
		    diemhoa = hoa;
	}
	void nhap(){
		cout<<"nhap ma thi sinh: ";
		cin>>mathisinh;
		cin.ignore();
		cout<<"nhap ho ten thi sinh: ";
		getline(cin, hoten);
		cout<<"nhap diem toan: ";
		cin>>diemtoan;
		cout<<"nhap diem ly: ";
		cin>>diemly;
		cout<<"nhap diem hoa: ";
		cin>>diemhoa;
	}
	void xuat() const{
		cout<<"ma thi sinh: "<<mathisinh<<endl;
		cout<<"ho ten thi sinh: "<<hoten<<endl;
		cout<<"diem toan: "<<diemtoan<<endl;
		cout<<"diem ly: "<<diemly<<endl;
		cout<<"diem hoa: "<<diemhoa<<endl;
		cout<<"tong diem: "<<tinhtongdiem()<<endl;
		
	}
	float tinhtongdiem() const{
		return diemtoan + diemly + diemhoa;
	}
};
int main(){
	int n;
	cout<<"nhap so luong thi sinh: ";
	cin>>n;
	
	thisinh* dsthisinh = new thisnh[n];
	
	for(int i=0; i<n; i++){
		cout<<"nhap thong tin thi sinh thu: "<<i+1<<endl;
		dsthisinh[i].nhap();
	}
	int tongdiemcaonhat = 0;
	for(int i=1; i<n; i++){
		if(dsthisinh[i].tinhtongdiem()>dsthisinh[tongdiemcaonhat].tinhtongdiem()){
			tongdiemcaonhat = i;
		}
	}
	cout<<"thong tin thi sinh co tong diem cao nhat: "<<endl;
	dsthisinh[tongdiemcaonhat].xuat();
	 delete[] dsthisinh;
	 return 0;
}
