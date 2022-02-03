#include <iostream>
#include <stdlib.h>
#include <ctime>

int main();

using namespace std;

/* ============================================================[ FUNGSI UNTUK WAKTU ] */
void waktu()
{
    time_t now=time(0);
    char* dt=ctime(&now);

    cout<<dt;
}

/* ============================================================[ FUNGSI UNTUK MEREK MOTOR ] */
void outputmerk(int merk)
{
    if (merk==1){cout<<"Honda";}
    else if (merk==2){cout<<"Yamaha";}
    else if (merk==3){cout<<"Suzuki";}
    else if (merk==4){cout<<"Kawasaki";}
}

/* ============================================================[ FUNGSI UNTUK PILIH PAKET ] */
void outputpaket(int paket)
{
    if (paket==1){cout<<"Paket Lengkap";}
    else if (paket==2){cout<<"Paket Ringan";}
}

/* ============================================================[ FUNGSI UNTUK PEMBELIAN ] */
void pembelian()
{
    string nama;
    char pilih,struk,again,trns,slh0,slh;
    int jum,x,kode_brg=0,jml_brg=0,bayar=0;
    long int harga=0,harga_brg=0,total=0,total_beli=0,kembali=0;

    atas1:
    cout<<" =====================================================================================\n";
    cout<<"\t \t \t \t  Daftar Barang\n";
    cout<<" ====================================================================================\n";
    cout<<" Kode\t| Nama Barang\t| Harga\t\t|\tKode\t| Nama Barang\t| Harga\n";
    cout<<" ====================================================================================\n";
    cout<<" 1.\tKunci Ring\tRp. 29.000\t|\t11.\tRagum\t\tRp. 380.000\n";
    cout<<" 2.\tKunci Pass\tRp. 33.000\t|\t12.\tGerinda\t\tRp. 390.000\n";
    cout<<" 3.\tKunci Bintang\tRp. 46.000\t|\t13.\tBor Tangan\tRp. 385.000\n";
    cout<<" 4.\tKunci Shock\tRp. 187.000\t|\t14.\tPresure Gauge\tRp. 245.000\n";
    cout<<" 5.\tKunci L\t\tRp. 75.000\t|\t15.\tPalu Besi\tRp. 76.000\n";
    cout<<" 6.\tKunci Busi GL\tRp. 30.000\t|\t16.\tPalu Karet\tRp. 61.000\n";
    cout<<" 7.\tKunci Busi FU\tRp. 30.000\t|\t17.\tTang Biasa\tRp. 40.000\n";
    cout<<" 8.\tObeng Plus\tRp. 80.000\t|\t18.\tObeng Ketok\tRp. 160.000\n";
    cout<<" 9.\tGergaji Besi\tRp. 47.000\t|\t19.\tKunci Inggris\tRp. 120.000\n";
    cout<<" 10.\tPahat\t\tRp. 26.000\t|\t20.\tKompressor\tRp. 3.800.000\n";
    cout<<" ------------------------------------------------------------------------------------\n";
    cout<<"\n Masukkan Nama         : "; cin.ignore();getline(cin,nama);
    benar:
    cout<<" Jumlah Jenis Barang   : "; cin>>jum;
    cout<<endl;
    x=1;
    if(jum>20)
    {
        cout<<"Masf Pilihan Salah";
        cout<<"Coba Lagi? [Y/T] : "; cin>>slh0;
        if (slh0=='y'||slh0=='Y')
        {
            goto benar;
        }
        else if (slh0=='t'||slh=='T')
        {
            system("cls");
            main();
        }
        else
        {
            goto atas1;
        }
    }
    else
    {
        do
    {
        beli:
        cout<<" Barang ke-"<<x<<" Kode          : "; cin>>kode_brg;
        switch(kode_brg)
        {
            case 1: harga=29000; break;
            case 2: harga=33000; break;
            case 3: harga=46000; break;
            case 4: harga=187000; break;
            case 5: harga=75000; break;
            case 6: harga=30000; break;
            case 7: harga=30000; break;
            case 8: harga=80000; break;
            case 9: harga=47000; break;
            case 10: harga=26000; break;
            case 11: harga=380000; break;
            case 12: harga=390000; break;
            case 13: harga=385000; break;
            case 14: harga=245000; break;
            case 15: harga=76000; break;
            case 16: harga=61000; break;
            case 17: harga=40000; break;
            case 18: harga=160000; break;
            case 19: harga=120000; break;
            case 20: harga=3800000; break;
            default:
                cout<<"Pilihan Salah!\n";
                cout<<"Pilih Lagi? [Y/T] : "; cin>>pilih;
                if (pilih=='Y'||pilih=='y')
                {
                    goto beli;
                }
                else if (pilih=='t'||pilih=='T')
                {
                    system("cls");
                    goto atas1;
                }
        }
        cout<<" Masukkan Jumlah Barang    : "; cin>>jml_brg;
        cout<<endl;
        harga_brg=harga*jml_brg;
        total=total+harga_brg;
        total_beli+=jml_brg;
        x++;
    }
    while(x<=jum);
    }

    cout<<"\n Total Beli      : Rp. "<<total_beli;
    cout<<"\n Total Pembelian : Rp. "<<total;
    cout<<"\n Jumlah Uang     : Rp. "; cin>>bayar;
    kembali=bayar-total;
    if (bayar<total)
    {

        cout<<"\n--- Maaf Uang Anda Tidak Cukup ---"<<endl<<endl;
        trans:
        cout<<"\n Ingin transaksi lagi? [Y/T] : ";cin>>again;
        if (again=='y'||again=='Y')
        {
            system("cls");
            main();
        }
        else if (again=='t'||again=='T')
        {
            exit(0);
        }
        else
        {
            cout<<" \nPilihan Salah!"<<endl<<endl;
            goto trans;
        }

    }
    else
    {
         cout<<" Kembalian       : Rp. "<<kembali;

    lg:
    cout<<"\n Tekan S untuk cetak Struk : "; cin>>struk;
    if (struk=='s'||struk=='S')
    {
        ini:
        system("cls");
        cout<<" ============================================\n";
		cout<<" \t         BENGKEL GARUDA\n";
		cout<<" \t       Struck Pembayaran\n";
		cout<<" ============================================\n";
		cout<<" \t "; waktu();
		cout<<" --------------------------------------------\n";
		cout<<" \tKepada Yth. "<<nama<<endl;
		cout<<" --------------------------------------------\n";
		for (x=1; x<=jum; x++)
        {
            cout<<kode_brg;
        }
		cout<<" Jumlah Barang : "<<total_beli<<endl;
		cout<<" Total         : Rp. "<<total<<endl;
		cout<<" Bayar         : Rp. "<<bayar<<endl;
		cout<<" Kembalian     : Rp. "<<kembali<<endl;
		cout<<" --------------------------------------------\n";
		cout<<" \tTerima kasih Atas Kunjungan Anda\n";
		cout<<" --------------------------------------------\n";
    }
    else
    {
        cout<<" \nPilihan Salah!";
        cout<<" \nCoba Lagi? [Y/T] : "; cin>>again;
        if (again=='y'||again=='Y')
        {
            goto ini;
        }
        else if (again=='t'||again=='T')
        {
            goto atas1;
        }
        else
        {
            goto lg;
        }
    }
    }
    transaksi:
    cout<<" \n\nIngin Transaksi Lagi? [Y/T] : "; cin>>trns;
    if (trns=='y'||trns=='Y')
    {
        system("cls");
        main();
    }
    else if (trns=='t'||trns=='T')
    {
        exit(0);
    }
    else
    {
        cout<<" Pilihan Salah";
        cout<<"\n Coba Lagi? [Y/T] : "; cin>>slh;
        if (slh=='y'||slh=='Y')
        {
            goto transaksi;
        }
        else if (slh=='t'||slh=='T')
        {
            exit(0);
        }
        else
        {
            goto lg;
        }
    }
}

/* ============================================================[ FUNGSI UNTUK SERVIS ] */
void service()
{
    string nama,al,no;
	int merk,harga,paket,harga_p,jasa;
	char coba,coba_p,mm,coba_mm,s,coba_s,pil,trns,slh;
	long int tot,tot1,tot2,bayar;

    cout<<"ISI DATA DIRI\n"<<endl<<endl;
    cout<<"Masukkan Nama    : "; cin.ignore();getline(cin,nama);
    cout<<"Masukkan Alamat  : "; getline(cin,al);
    cout<<"No. HP           : "; getline(cin,no);

    system("cls");

	ser1:
	cout<<"LAYANAN SERVICE BENGKEL\n"<<endl<<endl;
	cout<<"Silahkan Pilih Merk Anda :\n";
	cout<<"1. Honda\n2. Yamaha\n3. Suzuki\n4. Kawasaki\n"<<endl<<endl;
	cout<<"Motor Anda : "; cin>>merk;
	switch (merk)
	{
		case 1:
			harga=30000;
			break;
		case 2:
			harga=34000;
			break;
		case 3:
			harga=38000;
			break;
		case 4:
			harga=42000;
			break;
		default:
			cout<<"\nMaaf, Pilihan Anda Salah!"<<endl<<endl;
			cout<<"Coba Lagi? [Y/T] : "; cin>>coba;
			if (coba=='y'||coba=='Y')
			{
				system("cls");
				goto ser1;
			}
			else if (coba=='t'||coba=='T')
			{
				exit(0);
			}
			else
			{
				cout<<"\nMaaf, Pilihan Anda Salah!"<<endl<<endl;
				cout<<"Coba Lagi? [Y/T] : "; cin>>coba;
					if (coba=='y'||coba=='Y')
					{
						system("cls");
						goto ser1;
					}
				else
					{
						exit(0);
					}
			}
	}

	system("cls");
	pkt:
	cout<<"Silahkan Pilih Paket Service :\n";
	cout<<"1. Paket Service Lengkap\n2. Paket Service Ringan\n";
	cout<<"Paket Service : "; cin>>paket;
	if (paket==1)
	{
		harga_p=250000;
	}
	else if (paket==2)
	{
		harga_p=150000;
	}
	else
	{
		cout<<"\nMaaf, Pilihan Anda Salah!"<<endl<<endl;
		cout<<"Coba Lagi? [Y/T] : "; cin>>coba_p;
		if (coba_p=='y'||coba=='Y')
		{
			system("cls");
			goto pkt;
		}
		else if (coba_p=='t'||coba_p=='T')
		{
			exit(0);
		}
		else
		{
			cout<<"\nMaaf, Pilihan Anda Salah!"<<endl<<endl;
			cout<<"Coba Lagi? [Y/T] : "; cin>>coba_p;
				if (coba_p=='y'||coba=='Y')
				{
					system("cls");
					goto pkt;
				}
				else
				{
					exit(0);
				}
		}
	}

	jasa=10000;
	tot=harga+harga_p+jasa;

	disc:
	cout<<"MEMBERSHIP [Y/T] : "; cin>>mm;
	if (mm=='y'||mm=='Y')
	{
		tot1=tot-(tot*0.1);
	}
	else if (mm=='t'||mm=='T')
	{
		tot1=tot;
	}
	else
	{
	    lagii:
		cout<<"Pilihan Salah!\n";
		cout<<"Coba Lagi? [Y/T] : "; cin>>coba_mm;
		if (coba_mm=='y'||coba_mm=='Y')
		{
			goto disc;
		}
		else if (coba_mm=='t'||coba_mm=='T')
		{
			goto pkt;
		}
		else
		{
			goto lagii;
		}
	}
    trans2:
	cout<<"\nTotal		= Rp. "<<tot;
	cout<<"\nDiskon		= Rp. "<<tot1;
	cout<<"\nBayar		= Rp. "; cin>>bayar;
		tot2=bayar-tot1;
		if (bayar<tot1)
        {
            cout<<"\n --Maaf Uang Anda Tidak Cukup--";
            cout<<"\n Apakah Ingin Bertransaksi Lagi? [Y/T] : "; cin>>pil;
            if (pil=='y'||pil=='Y')
            {
                goto trans2;
            }
            else if (pil=='t'||pil=='T')
            {
                main();
            }
        }
        else
        {
            cout<<"\nKembalian	= Rp. "<<tot2;

            struk:
            cout<<"\n\nTekan 'S' untuk cetak Struck : "; cin>>s;
            if (s=='s'||s=='S')
            {
                lg:
                system("cls");
                cout<<" ============================================\n";
                cout<<" \t     BENGKEL GARUDA Kuitansi\n";
                cout<<" \t       Struck Pembayaran\n";
                cout<<" ============================================\n";
                cout<<"  Kepada Yth.\n";
                cout<<"  Bapak/Ibu/Sdr(i): "<<nama<<endl;
                cout<<"  Alamat          : "<<al<<endl;
                cout<<"  No. Hp          : "<<no<<endl;
                cout<<" --------------------------------------------";
                cout<<"\n  Merk Motor Anda   : "; outputmerk(merk);
                cout<<"\n  Pelayanan Service : "; outputpaket(paket);
                cout<<"\n --------------------------------------------";
                cout<<"\n\t  ";waktu();
                cout<<" --------------------------------------------";
                cout<<"\n Total      : Rp. "<<tot;
                cout<<"   Bayar : Rp. "<<bayar;
                cout<<"\n Total Bayar: Rp. "<<tot1;
                cout<<"\n Kembalian  : Rp. "<<tot2;
                cout<<"\n --------------------------------------------";
                cout<<"\n\tTerimakasih Atas Kunjungan Anda";
                cout<<"\n --------------------------------------------\n\n\n";
            }
            else
            {
                cout<<"\nMaaf, Pilihan Anda Salah!"<<endl<<endl;
                cout<<"Coba Lagi? [Y/T] : "; cin>>coba_s;
                if (coba_s=='y'||coba_s=='Y')
                {
                    goto struk;
                }
                else if (coba_s=='t'||coba_s=='T')
                {
                    main();
                }
                else
                {
                    goto ser1;
                }
            }
        }

        transaksi:
        cout<<" \n\nIngin Transaksi Lagi? [Y/T] : "; cin>>trns;
        if (trns=='y'||trns=='Y')
        {
            system("cls");
            main();
        }
        else if (trns=='t'||trns=='T')
        {
            exit(0);
        }
        else
        {
            cout<<" Pilihan Salah";
            cout<<"\n Coba Lagi? [Y/T] : "; cin>>slh;
            if (slh=='y'||slh=='Y')
            {
                goto transaksi;
            }
            else if (slh=='t'||slh=='T')
            {
                exit(0);
            }
            else
            {
                goto lg;
            }
    }
}

/* ============================================================[ FUNGSI MAIN ] */
int main()
{
	string layan;
	char ulang;

	satu:
	cout<<"SELAMAT DATANG DI BENGKEL [ GARUDA ]\n"<<endl<<endl;
	cout<<"Kami Menyediakan Pelayanan :\n";
	cout<<"1. Pembelian Alat Bengkel\n";
	cout<<"2. Service Kendaraan\n"<<endl<<endl;
	cout<<"Silahkan Pilih Pelayanan Kami [1/2] : "; cin>>layan;
	if (layan=="1")
	{
		system("cls");
		pembelian();
	}
	else if (layan=="2")
	{
		system("cls");
		service();
	}
	else
	{
		cout<<"\nMaaf, Pilihan Anda Salah!"<<endl<<endl;
		cout<<"\nApakah Anda Ingin Mengulang? [Y/T] : "; cin>>ulang;
		if (ulang=='y'||ulang=='Y')
		{
			system("cls");
			goto satu;
		}
		else if (ulang=='t'||ulang=='T')
		{
			exit(0);
		}
		else
		{
			cout<<"\nMaaf, Pilihan Anda Salah!"<<endl<<endl;
			cout<<"\nApakah Anda Ingin Mengulang? [Y/T] : "; cin>>ulang;
			if (ulang=='y'||ulang=='Y')
			{
				system("cls");
				goto satu;
			}
			else
			{
				exit(0);
			}
		}
	}
}
