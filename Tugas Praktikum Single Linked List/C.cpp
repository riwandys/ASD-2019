/* Gunakan Fungsi di master.cpp tambahkan fungsi dibawah dan int main */

infotype max (List L){
	/*	Mengirimkan nilai Info(P) yang maksimum */
	
}

infotype min (List L){
	/*	Mengirimkan nilai Info(P) yang minimum */
	
}

int main(){
	List L;
	createList(&L);

	//Soal C
	int n,x;
	cin>>n;
	for (int i =0;i<n;i++){
		cin>>x;
		insertLast(&L,x);
	}
	
	cout<<max(L)<<endl;
	cout<<min(L)<<endl;

