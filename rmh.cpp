#include <iostream>
#include <fstream>
using namespace std;

class rumahmakan
{
    friend istream& operator>>(istream&, rumahmakan&);
    public:
    	void jumlahharga();
    	void potonganharga();
    	void tampilanakhir();
   	private :
        int pilih, byr, kembalian, hrg, total, menu, jrk, ongkir, uang;
	    float diskon;
};
void rumahmakan::jumlahharga()
{
    ofstream hsl;
	hsl.open("struct.txt", ios::out);
	cout<<"||==========================||"<<endl;
	cout<<"||==========================||"<<endl;
	cout<<"||       RUMAH MAKAN        ||"<<endl;
	cout<<"||==========================||"<<endl;
	cout<<"||Menu Makanan dan Harga :  ||"<<endl;
	cout<<"||1. Ayam Geprek  : Rp21.000||"<<endl;
	cout<<"||2. Ayam Goreng  : Rp17.000||"<<endl;
	cout<<"||3. Udang Goreng : Rp19.000||"<<endl;
	cout<<"||4. Cumi Goreng  : Rp20.000||"<<endl;
	cout<<"||5. Ayam Bakar   : Rp25.000||"<<endl;
	cout<<"||==========================||"<<endl;
	cout<<"||==========================||"<<endl;
	
	cout<<"\nBanyak pesanan : ";
	cin>>menu;
	cout<<"Masukkan Uang anda :";
	cin>>uang;
	hsl<<"======================"<< endl;
	hsl<<"menu yang di pesan: "<<endl;
	hsl.close(); 
	for(int a=1;a<=menu;++a)
	{
		cout<<"\nSilahkan Pilih Menu Anda : ";
		cin>>pilih;
		if (pilih==1)
		{
			cout<<"1. Ayam Geprek : Rp21.000"<<endl;
	    	hrg=hrg+21000;
			ofstream hsl;
			hsl.open("struct.txt", ios::app);
			hsl<<"1. Ayam Geprek : Rp21.000"<<endl;
			hsl.close(); 
		}
		else if(pilih==2)
		{
	    	cout<<"2. Ayam Goreng : Rp17.000"<<endl;
		    hrg=hrg+17000;
		    hsl.open("struct.txt", ios::app);
		    hsl<<"2. Ayam Goreng : Rp17.000"<<endl;
		    hsl.close(); 
		}
		else if(pilih==3)
		{
		    cout<<"3. Udang Goreng : Rp19.000"<<endl;
		    hrg=hrg+19000;
		    hsl.open("struct.txt", ios::app);
		    hsl<<"3. Udang Goreng : Rp19.000"<<endl;
		    hsl.close(); 
		}
		else if(pilih==4)
		{
		    cout<<"4. Cumi Goreng : Rp20.000"<<endl;
		    hrg=hrg+20000;
		    hsl.open("struct.txt", ios::app);
		    hsl<<"4. Cumi Goreng : Rp20.000"<<endl;
		    hsl.close(); 
		}
		else if(pilih==5)
		{
		    cout<<"5. Ayam Bakar : Rp25.000"<<endl;
		    hrg=hrg+25000;
		    hsl.open("struct.txt", ios::app);
		    hsl<<"5. Ayam Bakar : Rp25.000"<<endl;
		    hsl.close(); 
		}
	}
	cout<<endl;
}
void rumahmakan::potonganharga()
{
    cout<<"Masukkan Jarak dari Restoran ke Rumah Anda (dalam KM) : ";
	cin>>jrk;
	cout<<"Jarak dari Restoran ke Rumah Anda adalah " << jrk << " Kilometer.";
	if (jrk <= 3)
	{
	    ongkir=15000;
		if (hrg <= 25000)
		{
	    	total = hrg + ongkir;
	    }
	    else  if (hrg > 25000)
		{
	    	cout<<"\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
	    	total = hrg + ongkir-3000;
	    }
	    else if (hrg > 50000)
		{
	    	cout<<"\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
	    	diskon = hrg * 0.15;
	    	total = hrg - diskon + ongkir-5000;
	    }
	    else if ((hrg > 150000))
		{
			cout<<"\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
	    	diskon = hrg * 0.35;
	    	total = hrg - diskon + ongkir-8000;
	    }
  	}
	else if (jrk > 3)
	{
		ongkir=25000;
    	if (hrg <= 25000)
		{
			total = hrg + 25000;
	    }
	    if ((hrg > 25000) && (hrg <= 50000))
		{
			cout<<"\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
	    	total = hrg + 22000;
	    }
	    else if ((hrg > 50000) && (hrg <= 150000))
		{
	    	cout<<"\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
	    	diskon = hrg * 0.15;
	    	total = hrg - diskon + 20000;
	  	}
	    else if ((hrg > 150000))
		{
	    	cout<<"\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
	    	diskon = hrg * 0.35;
	    	total = hrg - diskon + 17000;
	    }
	}
}
void rumahmakan::tampilanakhir()
{
    ofstream hsl;
	hsl.open("struct.txt", ios::out);
	hsl<<"||==========================||"<<endl;
	hsl<<"||==========================||"<<endl;
	hsl<<"||        RUMAH MAKAN       ||"<<endl;
	hsl<<"||==========================||"<<endl;
	hsl<<"||Menu Makanan dan Harga :  ||"<<endl;
	hsl<<"||1. Ayam Geprek  : Rp21.000||"<<endl;
	hsl<<"||2. Ayam Goreng  : Rp17.000||"<<endl;
	hsl<<"||3. Udang Goreng : Rp19.000||"<<endl;
	hsl<<"||4. Cumi Goreng  : Rp20.000||"<<endl;
	hsl<<"||5. Ayam Bakar   : Rp25.000||"<<endl;
    hsl<<"||==========================||"<<endl;
    hsl<<"||==========================||"<<endl;
  
    hsl<<"Harga pesanan anda : "<<hrg<<endl;
   	hsl<<"\nOngkir sebesar : "<<ongkir<<endl;
	
	if (hrg > 25000)
	{
		hsl<<"\nAnda mendapatkan potongan ongkir sebesar Rp3.000"<<endl;
		hsl<<"\nTotal Harga : "<<total<<endl;
		hsl<<"\nUang anda : "<<uang<<endl;
		hsl<<"\nKembalian : "<<uang - total<<endl;
		hsl.close();
	}
	else if (hrg > 50000)
	{
		hsl<<"\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000"<<endl;
		hsl<<"\nTotal Harga : "<<total<<endl;
		hsl<<"\nUang anda : "<<uang<<endl;
		hsl<<"\nKembalian : "<<uang - total<<endl;
		hsl.close();
	}
	else if ((hrg > 150000))
	{
	    hsl<<"\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000"<<endl;
	    hsl<<"\nTotal Harga : "<<total<<endl;
	    hsl<<"\nUang anda : "<<uang<<endl;
		hsl<<"\nKembalian : "<<uang - total<<endl;
		hsl.close();
	}
	else 
	hsl<<"\nTotal Harga : "<<total<<endl;
	hsl<<"\nUang anda : "<<uang<<endl;
	hsl<<"\nKembalian : "<<uang - total<<endl;
	hsl.close();
}		
int main ()
{
	rumahmakan x;
	x.jumlahharga();
	x.potonganharga();
	x.tampilanakhir();
	return 0;
}
