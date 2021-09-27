#include <iostream>
#include <string>

using namespace std;

int main ()
{
	int mercaderia, Peso, lugar;
	float documento1,paquete2,mobiliario3,repuestos4,art,electronico5,valor6,valor7,valor8,valor9,valor10,valor11,valor12,valor13,valor14, km, kg; 
	
	km = 0.13;
	kg = 2.5;
	
	cout<<"Ingrese que paquete quiere enviar es: "<<endl; // mostrar un mensaje en pantalla elije cualquier paquetes de envio
	cout<<"1. Documentos "<<endl;
	cout<<"2. Paqueteria "<<endl;
	cout<<"3. Mobiliario "<<endl;
	cout<<"4. Repuestos "<<endl;
    cout<<"5. Art. Electronicos "<<endl;
	cin>>mercaderia;
	
	cout<<"elije cualquier departamento es: "<<endl; // mostrar un mensaje en pantalla puede elejir cualquier de 5 departamentos de guatemala
	cout<<"1. Guatemala"<<endl;
	cout<<"2. Izabal "<<endl;
	cout<<"3. Petén "<<endl;
	cout<<"4. Chiquimula "<<endl;
    cout<<"5. Retalhuleu "<<endl;
    cin>>lugar;
	
	switch (lugar){
		
		case 1: 
		      valor9 = 10; break;
		      
		case 2:
			   valor10 = 300; break;
			   
		case 3:
			   valor11 = 460; break;
			   
		case 4:
			   valor12 = 178; break;
			   
		case 5: 
	           valor13 = 200; break;	   
	}
	
	repuestos4 = valor9+valor10+valor11+valor12+valor13;
	cout<<"Su total de los departamentos seria: "<<repuestos4 <<endl;
	
	switch (mercaderia) {
		
		case 1: 
		      cout<<"No importa el traslado su cantidad sera de: 40 quetzales "<<endl; break;
		      
	    case 2: 
	           cout<<"¿conoce el peso? "<<endl; // mostrar el mensaje pantalla si uno conoce dicho peso de un paquete 
	           cout<<"1. Si "<<endl;
	           cout<<"2. No "<<endl; 
	           cin>>Peso;
	        
	    switch (Peso) {
	    	
	    	case 1: 
	    	       cout<<"Ingrese el peso del paquete: "<<endl;
	    	       cin>>documento1;
	    	       
	    	      if (documento1<=35) {
	    	      	
	    	      mobiliario3 = km * repuestos4;
	    	      cout<<"Su valor a pagar de la distancia es: "<<mobiliario3 <<endl;
	    	      
	    	           paquete2 = (documento1 * kg);
	    	      cout<<"Su peso es de: " << paquete2 <<endl;    
				  }
				  else {
				  	cout<<"Su peso es incorrecto "<<endl;
				  }break;
	       case 2: 
	              cout<<"Ingrese largo del paquete: "<<endl;
	              cin>>valor14;
	              cout<<"Ingrese el ancho del paquete: "<<endl;
	              cin>>art,electronico5;
	              cout<<"Ingrese el alto del paquete: "<<endl;
	              cin>>valor6;
	              
	              valor7 = (valor14 * art,electronico5 * valor6)/2272;
	              
	              if(valor7<=50) {
	              	
	              	     mobiliario3 = km * repuestos4;
	                cout<<"Su peso volumetrico es de: "<<valor7 <<endl;	
	                 
	                 valor8 = (valor7*kg)+mobiliario3;
	                 
	                 cout<<"Su total es de: "<<valor8 <<endl;
				  }
				  else {
				  	cout<<"Su valor volumetrico es de: "<<valor7 <<endl;
				  	cout<<"Su total es incorrecto "<<endl;
				  }break;
		}break;
	case 3: 
	           cout<<"¿conoce el peso? "<<endl;
	           cout<<"1. Si "<<endl;
	           cout<<"2. No "<<endl; 
	           cin>>Peso;
	        
	    switch (Peso) {
	    	
	    	case 1: 
	    	       cout<<"Ingrese el peso del paquete: "<<endl;
	    	       cin>>documento1;
	    	       
	    	      if (documento1<=35) {
	    	      	
	    	      mobiliario3 = km * repuestos4;
	    	      cout<<"Su valor a pagar de la distancia es: "<<mobiliario3 <<endl; //mostrar el mensaje en pantalla peso de un paquete 
	    	      
	    	           paquete2 = (documento1 * kg);
	    	      cout<<"Su peso es de: " << paquete2 <<endl;    
				  }
				  else {
				  	cout<<"Su peso es incorrecto "<<endl;
				  }break;
	       case 2: 
	              cout<<"Ingrese largo del paquete: "<<endl;
	              cin>>valor14;
	              cout<<"Ingrese el ancho del paquete: "<<endl;
	              cin>>art,electronico5;
	              cout<<"Ingrese el alto del paquete: "<<endl;
	              cin>>valor6;
	              
	              valor7 = (valor14 * art,electronico5 * valor6)/2272;
	              
	              if(valor7<=50) {
	              	
	              	     mobiliario3 = km * repuestos4;
	                cout<<"Su peso volumetrico es de: "<<valor7 <<endl;	
	                 
	                 valor8 = (valor7*kg)+mobiliario3;
	                 
	                 cout<<"Su total es de: "<<valor8 <<endl;
				  }
				  else {
				  	cout<<"Su valor volumetrico es de: "<<valor7 <<endl;
				  	cout<<"Su total es incorrecto "<<endl;
				  }break;
		}break;
		case 4: 
	           cout<<"¿conoce el peso? "<<endl;
	           cout<<"1. Si "<<endl;
	           cout<<"2. No "<<endl; 
	           cin>>Peso;
	        
	    switch (Peso) {
	    	
	    	case 1: 
	    	       cout<<"Ingrese el peso del paquete: "<<endl;
	    	       cin>>documento1;
	    	       
	    	      if (documento1<=35) {
	    	      	
	    	      mobiliario3 = km * repuestos4;
	    	      cout<<"Su valor a pagar de la distancia es: "<<mobiliario3 <<endl;
	    	      
	    	           paquete2 = (documento1 * kg);
	    	      cout<<"Su peso es de: " << paquete2 <<endl;    
				  }
				  else {
				  	cout<<"Su peso es incorrecto "<<endl;
				  }break;
	       case 2: 
	              cout<<"Ingrese largo del paquete: "<<endl;
	              cin>>valor14;
	              cout<<"Ingrese el ancho del paquete: "<<endl;
	              cin>>art,electronico5;
	              cout<<"Ingrese el alto del paquete: "<<endl;
	              cin>>valor6;
	              
	              valor7 = (valor14 * art,electronico5 * valor6)/2272;
	              
	              if(valor7<=50) {
	              	
	              	     mobiliario3 = km * repuestos4;
	                cout<<"Su peso volumetrico es de: "<<valor7 <<endl;	
	                 
	                 valor8 = (valor7*kg)+mobiliario3;
	                 
	                 cout<<"Su total es de: "<<valor8 <<endl;
				  }
				  else {
				  	cout<<"Su valor volumetrico es de: "<<valor7 <<endl;
				  	cout<<"Su total es incorrecto "<<endl;
				  }break;
		}break;
		case 5: 
	           cout<<"¿conoce el peso? "<<endl;
	           cout<<"1. Si "<<endl;
	           cout<<"2. No "<<endl; 
	           cin>>Peso;
	        
	    switch (Peso) {
	    	
	    	case 1: 
	    	       cout<<"Ingrese el peso del paquete: "<<endl;
	    	       cin>>documento1;
	    	       
	    	      if (documento1<=35) {
	    	      	
	    	      mobiliario3 = km * repuestos4;
	    	      cout<<"Su valor a pagar de la distancia es: "<<mobiliario3 <<endl;
	    	      
	    	           paquete2 = (documento1 * kg);
	    	      cout<<"Su peso es de: " << paquete2 <<endl;    
				  }
				  else {
				  	cout<<"Su peso es incorrecto "<<endl;
				  }break;
	       case 2: 
	              cout<<"Ingrese largo del paquete: "<<endl;
	              cin>>valor14;
	              cout<<"Ingrese el ancho del paquete: "<<endl;
	              cin>>art,electronico5;
	              cout<<"Ingrese el alto del paquete: "<<endl;
	              cin>>valor6;
	              
	              valor7 = (valor14 * art,electronico5 * valor6)/2272;
	              
	              if(valor7<=50) {
	              	
	              	     mobiliario3 = km * repuestos4;
	                cout<<"Su peso volumetrico es de: "<<valor7 <<endl;	
	                 
	                 valor8 = (valor7*kg)+mobiliario3;
	                 
	                 cout<<"Su total es de: "<<valor8 <<endl;
				  }
				  else {
				  	cout<<"Su valor volumetrico es de: "<<valor7 <<endl;
				  	cout<<"Su total es incorrecto "<<endl;
				  }break;
		}break;	      	      	      
	}
	
return 0;
}
