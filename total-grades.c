#include <stdio.h>
#include <math.h>

void main(){

// point grade gen

const float appt = 4, apt = 3.75, bppt = 3.5, bpt = 3.25;

// !! calc

// point grade 

float ca1, ca2, ca3, ca4, cq1, cq2, cq3, cmid, cfinal, cscore, cpoint;
const float chours = 4;

printf("\n--> CALC\n");

printf("assgn 1 (/10) = ");
scanf("%f", &ca1);

printf("assgn 2 = ");
scanf("%f", &ca2);

printf("assgn 3 = ");
scanf("%f", &ca3);

printf("assgn 4 = "); 
scanf("%f", &ca4);


printf("quiz 1 (/20) = ");
scanf("%f", &cq1);

printf("quiz 2 = ");
scanf("%f", &cq2);

printf("quiz 3 = ");
scanf("%f", &cq3);

printf("mid (/30) = ");
scanf("%f", &cmid);

printf("final (/40) = ");
scanf("%f", &cfinal);

cscore = ((((ca1/10)+(ca2/10)+(ca3/10)+(ca4/10))/4)*10) + ((((cq1/20)+(cq2/20)+(cq3/20))/3)*20) + ((cmid/30)*30) + ((cfinal/40)*40);

// letter grade

if  (cscore >= 95) 
{
    cpoint = appt * chours;
    printf("\nfinal calc grade is %.3f .. A+\n", cscore);
}
else if (cscore >= 90)
{
    cpoint = apt * chours;
    printf("\nfinal calc grade is %.3f .. A\n", cscore);    

}
else if (cscore >= 85)
{
    cpoint = bppt * chours;
    printf("\nfinal calc grade is %.3f .. B+\n", cscore);
}
else 
{
    cpoint = bpt * chours;
    printf("\nfinal calc grade is %.3f .. B\n", cscore);    
}

// !! phys + lab

//point grade

float pa, pq1, pq2, pq3, pmidl, pmidt, plab, pfinall, pfinalt, pscore, ppoint;
const float phours = 4;

printf("\n--> PHYS\n");

printf("assgn tot (/5) = ");
scanf("%f", &pa);

printf("quiz 1 (/10) = ");
scanf("%f", &pq1);

printf("quiz 2 = ");
scanf("%f", &pq2);

printf("quiz 3 = ");
scanf("%f", &pq3);

printf("midlab (/10) = ");
scanf("%f", &pmidl);

printf("midt (/15) = ");
scanf("%f", &pmidt);

printf("labs (/10) = ");
scanf("%f", &plab);

printf("finallab (/15) = ");
scanf("%f", &pfinall);

printf("finalt (/35) = ");
scanf("%f", &pfinalt);

pscore = ((pa/5)*5) + ((((pq1/10)+(pq2/10)+(pq3/10))/3)*10) + ((pmidl/10)*10) + ((pmidt/15)*15) + ((plab/10)*10) + ((pfinall/15)*15) + ((pfinalt/35)*35);

// letter grade

if  (pscore >= 95) 
{
    ppoint = appt * phours;
    printf("\nfinal phys grade is %.3f .. A+\n", pscore);
}
else if (pscore >= 90)
{
    ppoint = apt * phours;
    printf("\nfinal phys grade is %.3f .. A\n", pscore);    

}
else if (pscore >= 85)
{
    ppoint = bppt * phours;
    printf("\nfinal phys grade is %.3f .. B+\n", pscore);
}
else 
{
    ppoint = bpt * phours;
    printf("\nfinal phys grade is %.3f .. B\n", pscore);    
}

// !! eng

// point grade

float eq1, eq2, eq3, emid, efinal, escore, epoint; 
float const ehours = 3;

printf("\n--> ENGLISH\n");

printf("quiz 1 (/15) = ");
scanf("%f", &eq1);

printf("quiz 2 = ");
scanf("%f", &eq2);

printf("quiz 3 = ");
scanf("%f", &eq3);

printf("mid (/20) = ");
scanf("%f", &emid);

printf("final (/35) = ");
scanf("%f", &efinal);

escore = ((((eq1/15)+(eq2/15)+(eq3/15))/3)*45) + ((emid/20)*20) + ((efinal/35)*35);

// letter grade

if  (escore >= 95) 
{
    epoint = appt * ehours;
    printf("\nfinal eng grade is %.3f .. A+\n", escore);
}
else if (escore >= 90)
{
    epoint = apt * ehours;
    printf("\nfinal eng grade is %.3f .. A\n", escore);    

}
else if (escore >= 85)
{
    epoint = bppt * ehours;
    printf("\nfinal eng grade is %.3f .. B+\n", escore);
}
else 
{
    epoint = bpt * ehours;
    printf("\nfinal eng grade is %.3f .. B\n", escore);    
}

// !! CS + lab

// point grade

float csa, csq1, csq2, csq3, csmidl, csmidt, csfinall, csfinalt, csscore, cspoint;
float const cshours = 3; 

printf("\n--> CS\n");

printf("assgn tot (/15) = ");
scanf("%f", &csa);

printf("quiz 1 (/10) = ");
scanf("%f", &csq1);

printf("quiz 2 = ");
scanf("%f", &csq2);

printf("quiz 3 = ");
scanf("%f", &csq3);

printf("midlab (/15) = ");
scanf("%f", &csmidl);

printf("midt (/20) = ");
scanf("%f", &csmidt);

printf("finallab (/15) = ");
scanf("%f", &csfinall);

printf("finalt (/35) = ");
scanf("%f", &csfinalt);

csscore = ((csa/15)*5) + ((((csq1/10)+(csq2/10)+(csq3/10))/3)*10) + ((csmidl/15)*15) + ((csmidt/20)*20) + ((csfinall/15)*15) + ((csfinalt/35)*35);

// letter grade

if  (csscore >= 95) 
{
    cspoint = appt * cshours;
    printf("\nfinal CS grade is %.3f .. A+\n", csscore);
}
else if (csscore >= 90)
{
    cspoint = apt * cshours;
    printf("\nfinal CS grade is %.3f .. A\n", csscore);    

}
else if (csscore >= 85)
{
    cspoint = bppt * cshours;
    printf("\nfinal CS grade is %.3f .. B+\n", csscore);
}
else 
{
    cspoint = bpt * cshours;
    printf("\nfinal CS grade is %.3f .. B\n", csscore);    
}

// !! PE 

// point grade

float pea, peproj, pemid, pefinal, pescore, pepoint;
float const pehours = 1;

printf("\n--> PE\n");

printf("assignment (/15) = ");
scanf("%f", &pea);

printf("project (/20) = ");
scanf("%f", &peproj);

printf("mid (/25) = ");
scanf("%f", &pemid);

printf("final (/40) = ");
scanf("%f", &pefinal);

pescore = ((pea/15)*15) + ((peproj/20)*20) + ((pemid/25)*25) + ((pefinal/40)*40);

// letter grade

if  (pescore >= 95) 
{
    pepoint = appt * pehours;
    printf("\nfinal PE grade is %.3f .. A+\n", pescore);
}
else if (pescore >= 90)
{
    pepoint = apt * pehours;
    printf("\nfinal PE grade is %.3f .. A\n", pescore);    

}
else if (pescore >= 85)
{
    pepoint = bppt * pehours;
    printf("\nfinal PE grade is %.3f .. B+\n", pescore); 
}
else 
{
    pepoint = bpt * pehours;
    printf("\nfinal PE grade is %.3f .. B\n", pescore);    
}

// !! islamic

// point grade

float isq, ismid, isa, isfinal, isscore, ispoint;
float const ishours = 2;

printf("\n--> ISLAMIC\n");

printf("assignment (/10) = ");
scanf("%f", &isa);

printf("quiz (/20) = ");
scanf("%f", &isq);

printf("mid (/30) = ");
scanf("%f", &ismid);

printf("final (/40) = ");
scanf("%f", &isfinal);


isscore = ((isq/20)*20) + ((ismid/30)*30) + ((isa/10)*10) + ((isfinal/40)*40);

// letter grade

if  (isscore >= 95) 
{
    ispoint = appt * ishours;
    printf("\nfinal islamic grade is %.3f .. A+\n", isscore);
} 
else if (isscore >= 90)
{
    ispoint = apt * ishours;
    printf("\nfinal islamic grade is %.3f .. A\n", isscore);    

}
else if (isscore >= 85)
{
    ispoint = bppt * ishours;
    printf("\nfinal islamic grade is %.3f .. B+\n", isscore); 
}
else 
{
    ispoint = bpt * ishours;
    printf("\nfinal islamic grade is %.3f .. B\n", isscore);    
}

// GPA CALC

float gpa, tot_hours;

tot_hours = (phours + ishours + ehours + cshours + pehours + chours);
gpa = (ppoint + ispoint + epoint + cspoint + + pepoint + cpoint)/tot_hours;

printf("\ntotal GPA is %.3f !\n", gpa);

// exit sequence

char exit;
printf("\n\n... Press any button + ENTER to exit.");
scanf("%s", exit); 

}
