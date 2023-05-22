#include<>
#include<>
#define MAX_STRLEN 256
edadmujeres==0;
edadhombres==0;
cantidadmujeres==0;
cantidadhombres==0;
for(){ /*para*/
  printf("ingresa el genero de las personas\n");
  if(genero=="f"){ /*si1*/
    cantidadmujeres==cantidadmujeres+1;
    edadmujeres=edademujeres+1;
  }else{ /*sino1*/
    cantidadhombres=cantidadhombres+1;
    edadhombres=edadhombres+1;
  }/*finsi1*/
  if(cantidadmujeres>0){ /*si2*/
    promediomujeres==edadmujeres/cantidadmujeres;
    printf("cantidad de mujeres en el grupo:%i\n", cantidadmujeres);
    printf("la edad promedio de mujeres es de:%i\n", promediomujeres);
  }else{ /*sino2*/
    printf("no hay mujeres en el grupo\n");
  } /*finsi2*/
   if(cantidadhombres>0){ /*si3*/
    promediohombres==edadhombres/cantidadhombres;
    printf("cantidad de hombres en el grupo:%i\n", cantidadhombres);
    printf("la edad promedio de hombres es de:%i\n", promediohombres);
  }else{ /*sino3*/
    printf("no hay hombres en el grupo\n");
  } /*finsi3*/
  if(edadmujeres>edadhombres){ /*si4*/
    printf("el genero de mayor edad es: femenino\n");
  }else{ /*sino4*/
    if(edadhombres>edadmujeres){/*si5*/
      printf("el genero de mayor edad es: masculino\n");
    }else{ /*sino5*/ 
      printf("ambos generos son de igual magnitud\n");
      
    } /*finsi5*/
  } /*finsi*/
  
  return 0;
  
} /*finpara*/
