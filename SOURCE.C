#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int choice, c, pref, loc,del;
int mob, pin, p, emi; float r=12.75;
charch, name[10],add[50], email[25];
FILE *f;
clrscr();
printf(" WELCOME \n");
printf(" TO BEST-WHEELS CORP. \n");
printf(" YOUR SATISFACTION OUR DREAMS. \n");
printf("\n \n \nPLEASE SELECT YOUR PREFERED COMPANY:"
"\n1.HONDA \n2.MARUTI SUZUKI \n3.HYUNDAI \n4.MAHINDRA
\n5.CHEVROLET");
scanf("\n%d",&choice);
if(choice==1) {
printf("\nNOW PLEASE SELECT YOUR CHOICE OF CAR FOR HONDA:"
"\n1.BRIO \n2.CITY \n3.AMAZE \n4.JAZZ \n5.CR-V");
scanf("\n%d",&c);
if(c==1) {
printf("\nDESCRIPTION OF BRIO"
"\nENGINE \tTYPE \t\t\tSOHC\i-VTEC"
"\n\t\tNo. of cylinders \t4"
"\n\t\tNo. of valves \t\t16"
"\n\t\tDisplacement \t\t1198"
"\n\t\tMaxTorque(Nm @ rpm) \t65[88] @ 6000"
"\n\t\tFuel Supply system \tPGM - fi"
"\n\t\tFuel Efficiency for MT \t19.4 kmpl"
"\n\t\tFuel Efficiency for AT \t16.5 kmpl"
"\nTRANSMISSION \tManual \t\t\t5 forward & 1 Reverse"
"\n\t\tAutomatic \t\t5 Speed AT"

"\nSteering \tType \t\t\tCollapsible Electric Power steering"
"\n\t\tTurning Radius \t\t4.5"
"\nBrake System \tFront \t\t\tDisc"
"\n\t\tRear \t\t\tDrum"
"\nSuspension sys. Front \t\t\tMcpherson strut coil spring"
"\n\t\tRear \t\t\tTorsion Beam coil spring");
}
if(pref==2){
printf("price of Brio is Rs.4,27,700");
}
if(c==2){
printf("\nDESCRIPTION OF CITY"
"\n\t\tDetails \tPetrol \t\t\tDiesal"
"\nEngine \t\tType \t\t4 cylinder,SOHCi-VTEC 4 cylinder,DOHCi-DTEC"
"\n\t\tDisplacement \t1497 \t\t\t1498"
"\n\t\tNo. of Valves \t16 \t\t\t16"
"\n\t\tPower(ps) \t119 @ 6600 \t\t100 @ 3600"
"\n\t\tTorque(nm) \t145 @ 4500 \t\t200 @ 1750"
"\nTransmission \tmanual \t\t5 Forward & 1 reverse \t6 forward & 1 reverse"
"\n\t\tAutomatic \tCVT \t\t\t--"
"\nSteering system Type \t\tCollapsible Electric power Assisted"
"\n\t\tTurning Radius \t5.3 \t\t\t5.3"
"\nSuspension Sys, Front \t\tMcPherson Strut, Coil Spring"
"\n\t\tRear \t\tTorsion beam axle,coil spring"
"\nBrake system \tFront \t\tDisc"
"\n\t\tRear \t\tDrum");
}
if(c==3){
printf("\nDESCRIPTION FOR AMAZE"
"\n\t\t\t\tPetrol \t\t\tDiesel"
"\nEngine \t\tType \t\t4 cylinder,SOHCi-VTEC 4 cy;inder,DODHi-DETEC"
"\n\t\tDisplacement \t1198 \t\t\t1498"
"\n\t\tNo. of Valves \t16 \t\t\t16"
"\n\t\tPower(KW @ rpm) 65[88] @ 6000 \t\t73[100] @ 3600"
"\n\t\tTorue(NM @ RPM) 109 @ 4500 \t\t200 @ 1750"
"\n\t\tFuel Efficiency MT-18.0 & AT-15.5 \tMT-25.8"
"\nTransmission \tManual \t\t5 Forward &1 reverse \t5 Forward & 1 Reverse"
"\n\t\t1Automatic \t5 speed \t\t--"
"\nSteering system Type \t\tCollasible electric \tCollapsible Electric"
"\n\t\tTurningRadius 4.5 \t\t\t4.7"
"\nSuspensionSyst Front \t\tMcPherson Strut Coil\tMcPherson Strut Coil Spr"
"\t\tRear \t\tTorsion Beam Coil \tTorsion Beam Coil");
}

if(c==4) {
printf("\nDESCRIPTION OF JAZZ"
"\nEngine \t\tPetrol \t\t\tDiesel"
"\n\nType \t\t4 cylinder,SOHCi-VTEC \t4 cylinder,DOCHCi-DTEC"
"\nDisplacement\t1199 \t\t\t1498"
"\nNo. of Valves \t16 \t\t\t16"
"\nPower(@rpm) \t90 @ 600 \t\t100 @ 3600"
"\nTorque(@rpm) \t110 @ 4800 \t\t200 @ 3600"
"\nFuel Efficiency MT-18.4(E),18.7(S,SV) \tMT-26.8(E),27.3(S,SV)"
"\n\nTransmission \nManual \t\t5 forward & 1 Reverse \t6 Forward& 1 Reaverse"
"\nAutomatic \tContinuousVeri. Trans. \t-"
"\n\nSteering System \nType \t\tCollapsible Electric \tCollapsibale electric"
"\nTuring Radius \t5.1m \t\t\t5.1m"
"\n\nBrakesymtem \nFront \t\tDisc \t\t\tDisc"
"\nRear \t\tDrum \t\t\tDisc");
}
if(c==5) {
printf("\nDESCRIPTION OF CR-V"
"\nENGINE \t\t\tPETROL \t\t\t\tDIESEL"
"\nEngine \t\t\tSOHCi-VTEC in line,4 Cylinder DOHC i-VTEC in line"
"\nDisplacement \t\t1997 \t\t\t\t2354"
"\nFuel Efficiency \t13.7 km/l \t\t\t12 km/l"
"\nPERFORMANCE"
"\nMax Power \t\t156/6500 \t\t\t190/7000"
"\nMax Torque \t\t190/4300 \t\t\t226/4400"
"\nTRANSMISSION"
"\nManual(MT) \t\t6 Forward, 1 reverse \t\t6 forward, 1 reverse"
"\nAutomatic(AT) \t\t5-Speed(5AT) \t\t\t5-Speed(5AT)"
"\nSUSPENSION"
"\nFrontSuspention \tMcPherson Strut, coil spr. \tMcPherson strut coil spr"
"Rear Suspention \tDouble Wishbone, Coil spring \tDouble Wishbone coil Spr"
"Anti-Roll Bar \t\tTorsion Bar Type(Front & Rear \tTorsion Bar Type"
"\nBrakes"
"\nFront \t\t\tDisc \t1\t\t\tDisc");
}
}
if(choice==2) {
printf("\nNOW PLEASE SELECT YOUR CHOICE OF CAR FOR MARUTI SUZUKI:"
"\n1.CIAZ \n2.SWIFT DZIRE \n3.RITZ \n4.EECO \n5.STINGRAY");
scanf("%d",&c);
if(c==1){
printf("\nDISCRIPTION OF CIAZ"

"\nENGINE \t\tPETROL \t\tDIESEL"
"\nEngine \t\tGasoline \tDiesel SHVS"
"\nValve System \tDOHC \t\tDOHC"
"\nFuel Efficiency 20.73 \t\t28.09"
"\nMax Power \t38/6000 \t66/4000"
"\nMax Torque \t130/4000 \t22/1750"
"\n\nTRANSMISSION \t5MT/44T \t5MT"
"\n\nBRAKES \t\tVentilated Disc Ventilated Disc"
"\nRear Brakes \tDrum \t\tDrum"
"\n\nSUSPENSION"
"\nFront \t\tMcPherson \tMcPherson"
"\nRear \t\tTorsion Beam \tTorsion Beam");
}
if(c==2){
printf("\nDISCRIPTION OF DEZIRE"
"\nENGINE \t\t\tPETROL \t\t\tDIESEL"
"\nFuel Efficiency \t42 \t\t\t42"
"\nDisplacement \t\t1197 \t\t\t1248"
"\nValve System \t\t16 \t\t\t16"
"\nMax Power \t\t84.3 @ 6000 \t\t75 @ 4000"
"\nMax Torque \t\t115 @ 4000 \t\t190 @ 2000"
"\nFuel Distribution \tMulrtipoint injection CRDI(Common Rail Direct Inj.)"
"\n\nTRANSMISSION \t\t5MT/4AT \t\t5MT/AGS"
"\n\nSTEERING \t\tRack& Pinion \t\tRack& Pinion"
"\nPower steering \t\tEPS& Tilt \t\tEPS& Tilt"
"\n\nSUSPENSION"
"\nFront \t\t\tMacPherson Strut \tMacPherson strut"
"\nRear \t\t\tTorsion Beam \t\tTorsion Beam"
"\n\nBRAKES"
"\nFront \t\t\tVentilated Disc \tVetilatedDics");
}
if(c==3){
printf("\nDISCRIPTION OF RITZ"
"\nENGINE \t\tPETROL \t\t DIESEL"
"\nEngine \t\t1199 \t\t 1248"
"\nMax Power \t87ps @ 6000 rpm 75ps @ 4000 rpm"
"\nMax Torque \t114Nm @ 4000rpm 190Nm @ 2000 rpm"
"\nFuel Efficiency 18.50MT 17.16AT 23.2"
"\n\nTRANMISSION \t5MT/4AT \t 5MT/4AT"
"\n\nSUSPENSION"
"\nFront \t\tMacPherson strut McPherson strut"
"\nRear \t\tTorsion Beam \t Torsion Beam"
"\n\nSUSPENSION"

"\nFront \t\tVentilatedDisc Ventilated Disc"
"\nRear \t\tDrum \t\t Drum");
}
if(c==4){
printf("\nDISCRIPTION OF EECO"
"\nENGINE \t\t5 SEATER STANDARD \t5 SEATER AC \t7 SEATER STD"
"\nEngine \t\t1196 \t\t\t1196 \t\t1196"
"\nFuel Type \tPetrol \t\t\tPetrol \t\tPetrol"
"\nMax Power \t73bhp @ 6000 rpm \t73bhp @ 6000rpm 73 bhp @ 6000 rpm"
"\nMax Torque \t101 Nm @ 3000 rpm \t101Nm @ 3000rpm 101 Nm @ 3000
rpm"
"\n\nTRANMISSION \t5 Speed-MT \t\t5 Speed-MT"
"\n\nFuel Efficiency 40 \t\t\t40 \t\t40"
"\n\nSTEERING \tRack& Pinion \t\tRack& pinion \tRack& Pinion"
"\n\nSUSPENSION"
"\nFront \t\tMcPherson strut \tMcPherson \tMcPherson"
"\nRear \t\t3 link rigid \t\t3 link rigid \t3 link rigid"
"\n\nBRAKES"
"\nFront \t\tDisc \t\t\tDisc \t\tDisc"
"\nRear \t\tDrum \t\t\tDrum \t\tDrum");
}
if(c==5){
printf("\nDISCRIPTION OF STINGRAY"
"\nENGINE \t\t\tPETROL"
"\nEngine Capacity \t998cc2"
"\nMax Power \t\t50.0 KW"
"\nMax Toque \t\t90Nm @ 3500rpm"
"\nValve System \t\t4"
"\nFuel tank Capacity \t35 ltr."
"\n\nTransmission \t\t5 Speed MT (Cable Type Gear Shift),AGS"
"\n\nSUSPENSION"
"\nFront \t\t\tMcPherson strut with coil spring"
"\nRear \t\t\tIsolatedtrailling with coil spring"
"\n\nSTEERING \t\tElectric Power Steering"
"\n\nBRAKES"
"\nFront \t\t\tVentilated Disc"
"\nRear \t\t\tDrum");
}
}
if(choice==3) {
printf("\nNOW PLEASE SELECT YOUR CAR FOR HYUNDAI:"

"\n1.XCENT \n2.EON \n3.ELANTRA \n4.ELITE i20 \n5.i10");
scanf("%d",&c);
if(c==1) {
printf("\nDISCRIPTION OF XCENT"
"\nENGINE \t\tDIESEL"
"\nEngine Level \t1.1L"
"\nDisplacement \t1.120"
"\nMax Power \t72/4000"
"\nMax Torque \t18.4/1750 - 2500"
"\n\nTRANSMISSION \tManual 5"
"\n\nSUSPENSION"
"\nFront \t\tMcPherson Strut type"
"\nRear \t\tDrum"
"\n\nFUEL EFFICIENCY 43");
}
if(c==2){
printf("\nDISCRIPTION OF EON"
"\nENGINE \tPETROL"
"\nEngine label \t0.8L MPi"
"\nDisplacement \t814"
"\nMax Power \t56/5500"
"\nMax Toque \t7.6/4000"
"\nNumber of Valves \t9"
"\nFuel Consumption 32"
"\n\nTRANSMISSION \tManual 5"
"\n\nSUSPENSION"
"\nFront \t\tMcPherson strut"
"\nRear \t\tTorsion Beam Axle"
"\n\nBRAKE"
"\nFront \t\tDisc"
"\nRear \t\tDrum");
}
if(c==3){
printf("\nDISCRIPTION OF ELANTRA"
"\nENGINE"
"\nEngine Label \t1.8L"
"\nDisplacement \t1797"
"\nMax Power \t149.5/6500"
"\nMaxTorque \t18.1/4700"
"\nNo. of valves \t4"
"\n\nTRANSMISSION \tManual 6"
"\n\nSUSPENSION"

"\nFront \t\tMcPherson strut with coil spring"
"\nRear \t\tCoupled Torsion Beam Axle"
"\n\nBRAKE"
"\nFront \t\tDisc"
"\nRear \t\tDisc");
}
if(c==4){
printf("\nDISCRIPTION OF ELITE i20"
"\nENGINE"
"\nEngine label \t1.2L Kappa"
"\nDisplacement \t1197"
"\nMax Power \t83/6000"
"\nMax Torque \t11.7/4000"
"\nNo. of Valves \t16"
"\n\nTRANSMISSION \tManual 5"
"\n\nSUSPENSION"
"\nFront \t\tMcPherson strut with coil spring"
"\nRear \t\tCoupled Torsion Beam Axle with Coil Spring"
"\n\nBRAKE"
"\nFront \t\tDisc"
"\nRear \t\tDrum");
}
if(c==5){
printf("\nDISCRIPTOIOBN OF i10"
"\nENGINE"
"\nEngine Label \t1.1L iRDE 2"
"\nDisplacement \t1086"
"\nMax Power \t69/5500"
"\nMax Torque \t10.1/4500"
"\nNo of Valves \t12"
"\n\nTRANSMISSION \tManual 5"
"\n\nSUSPENSION"
"\nFront \t\tMcPherson strut with coil"
"\nRear \t\tCoubled Torsion Beam"
"\n\nBRAKE"
"\nFront \t\tVentilated Disc"
"\nRear \t\tDrum");
}
}
if(choice==4) {
printf("\nNOW PLEASE SELECT YOUR CHOICE OF CAR FOR MAHINDRA:"
"\n1.XUV 500 \n2. SCORPIO S10 \n3.QUANTO \n4.THAR \n5.BOLERO");
scanf("%d",&c);

if(c==1){
printf("\nDISCRIPTION OF XUV 500"
"\nENGINE \t\tmHawk 140 Diesel engine"
"\nMax Power \t1.3 Kw @ 3750 rpm"
"\nMax Torque \t330 Nm @ 1600-2800 rpm"
"\n\nSUSPENSION"
"\nFront \t\tMcPherson Type with Anti-Roll Bar"
"\nRear \t\tMultiInk Type with Anti-Roll Bar"
"\n\nBRAKE"
"\nFront \t\tDisc& caliper Type"
"\nRear \t\tDisc& Caliper Type");
}
if(c==2)
{
printf("\nDISCRIPTION OF SCORPIO S10"
"\nENGINE \tmHawk 4 cylinder Engine"
"\nMax Power \t120 bhp (88KW) @4000rpm"
"\nMax Torque \t280Nm @ 1800–2800 rpm"
"\n\nSUSPENSION"
"\nFront \tDouble Wish-bone type"
"\nRear \tMulti Link Coil Spring"
"\n\nBRAKES"
"\nFront \tVentilated Disc"
"\nRear \tDrum"
"\n\nFUEL TANK CAPACITY 60 Ltrs");
}
if(c==3){
printf("\nDISCRIPTION OF QUANTO"
"\nENGINE \tmCR100,Common Rail,BSIV"
"\nMax Power \t73.5kw(100BHP)@3750"
"\nMax Torque \t240Nm@1600-2800rpm"
"\n\nSUSPENSION"
"\nFront \tColi springs with Anti roll Bar"
"\nRear \tFive Bar Link,Coil springs"
"\n\nBRAKES"
"\nFront \tDisc"
"\nRear \tDrum");
}
if(c==4){
printf("\nDISCRIPTION OF THAR"
"\nENGINE \tNEF TCI- CRDe"
"\nMax Power \t105 hp @ 3800 rpm"

"\nMax Torque \t247 Nm @ 1800-2000 rpm"
"\n\nTRANSMISSION \t5 Speed Manual"
"\nSTEERING \tRack& Pinion Power Steering"
"\n\nSUSPENSION"
"\nFront \tIFS with Torsion Bar and Stablizer Bar"
"\nRear \tSemi Elliptical Leaf Spring"
"\n\nBRAKES"
"\nFront \t226 mm Disc"
"\nRear \t282 mm Drum");
}
if(c==5){
printf("\nDISCRIPTION OF BOLERO"
"\nENGINE \t2523 cc m2DiCR Enginee"
"\nMax Power \t46.3 kW @ 3200 rpm"
"\nMax Torque \t195 NM @ 1400-2200 rpm"
"\n\nSUSPENSION"
"\nFront \tIndependent with Coil Spring and Anti Roll Bar"
"\nRear \t Ellipitical Leaf Springs"
"\n\nBRAKES"
"\nFront \tDisc"
"\nRear \tDrum");
}
}
if(choice==5){
printf("\nNOW PLEASE SELECT YOUR CHOICE OF CAR FOR CHEVROLET:"
"\n1.BEAT \n2.SPARK \n3.CRUZE \n4.SAIL \n5.TAVERA");
scanf("%d",&c);
if(c==1){
printf("\nDISCRIPTION OF BEAT"
"\nENGINE"
"\nMax Power \t57.1 PS @ 4000 rpm"
"\nMax Torque \t142.5 NM @ 1750 rpm"
"\n\nTRANSMISSION \t5 Speed Manual"
"\n\nSUSPENSION"
"\nFront \tMcPherson Strut"
"\nRear \tCompound Crank Type"
"\n\nBRAKES"
"\nFront \tDisc"
"\nRear \tDrum");
}if(c==2){
printf("\nDISCRIPTION OF SPARK"

"\nENGINE"
"\nMax Power \t61.18 PS @ 5400 rpm"
"\nMax Torque \t86.8 NM @ 4200 rpm"
"\n\nTRANSMISSION \t5 Speed Manual"
"\n\nSUSPENSION"
"\nFront \tMcPherson Strut with Anti Roll Bars"
"\nRear \tTorsion Beam Axle"
"\n\nBRAKES"
"\nFront \tDisc"
"\nRear \tDrum");
}
if(c==3){
printf("\nDISCRIPTION OF CRUZE"
"\nENGINE Displacement 1998"
"\nMax Power \t163.7 bhp @ 3800 rpm"
"\nMax Torque \t360 Nm @2000 rpm"
"\n\nTRANSMISSION \tAutomatic"
"\n\nSUSPENSION"
"\nFront \tMacPherson Strut"
"\nRear \tCompound Link Crank"
"\n\nBRAKES"
"\nFront \tDisc"
"\nRear \tDisc");
}
if(c==4){
printf("\nDISCRIPTION OF SAIL"
"\nENGINE"
"\nMax Power \t75 PS @ 4000 rpm"
"\nMax Torque \t190 Nm @ 1750 rpm"
"\n\nTRANSMISSION \t5 MT"
"\n\nSUSPENSION"
"\nFront \tMcPhersonStruts"
"\nRear \tTwist Axle"
"\n\nBRAKES"
"\nFront \tDisc"
"\nRear \tDrum");
}
if(c==5){
printf("\nDISCRIPTION OF TAVERA"
"\nENGINE \t4 Cylinder Direct Injection Turbocharged Diesel Engine"
"\nMax Power \t73.4/3900"
"\nMax Torque \t171/ 1800"
"\n\nTRANSMISSION \t5 Speed Manual Transmission"

"\n\nSUSPENSION"
"\nFront \tIndependent Torsion Bar Spring"
"\nRear \tSemi-Elliptical, Leaf Spring"
"\n\nBRAKES"
"\nFront \tDisc"
"\nRear \tDrum");
}
}
printf("\n\nPlease Enter Your Prefference"
"\n1.Book A Test Drive \n2.View Price \n3.Emi Calculator");
scanf("%d",&pref);
if(pref==1){
f=fopen("drive.dat","W");
if(f==NULL){
printf("\nfilecant be opend");
exit(0);
}
do{
printf("enter your name, address, pin, mobile no, email");
scanf("%s%s%d%d%s",&name,&add,&pin,&mob,&email);
fprintf(f,"%s%s%d%d%s",name,add,pin,mob,email);
printf("\n please confirm your details press 'Y' or 'N'");
fflush(stdin);
ch=getchar();
}
while(ch=='Y');
fclose(f);
}
if(pref==2,choice==1){
if(c==1){
printf("\nPrice of Brio");
printf(" Rs. 4,27,700");
}}
if(pref==2,choice==1) {
if(c==2){
printf("\nPrice of City");
printf(" Rs. 771,800");
}}
if(pref==2,choice==1){

if(c==3){
printf("\nPrice of Amaze");
printf(" Rs. 5,26,755");
} }
if(pref==2,choice==1){
if(c==4){
printf("\nPrice of Jazz");
printf(" Rs. 5,45,200");
}}
if(pref==2,choice==1){
if(c==5){
printf("\nPrice of CR-V");
printf(" Rs. 2,31,800");
}}
if(pref==2,choice==2){
if(c==1){
printf("\nPrice of Ciaz");
printf(" Rs. 8,23,005");
}}
if(pref==2,choice==2){
if(c==2){
printf("\nPrice of Swift");
printf(" Rs. 5,84,344");
}}
if(pref==2,choice==2){
if(c==3){
printf("\nPrice of Ritz");
printf(" Rs. 5,53,205");
}}
if(pref==2,choice==2){
if(c==4){
printf("\nPrice of Eeco");
printf(" Rs. 3,88,605");
}}
if(pref==2,choice==2){
if(c==5){

printf("\nPrice of Stingray");
printf(" Rs. 4,26,572");
}}
if(pref==2,choice==3){
if(c==1){
printf("\nPrice of Xcent");
printf(" Rs. 5,30,929");
}}
if(pref==2,choice==3){
if(c==2){
printf("\nPrice of EON");
printf(" Rs. 3,20,664");
}}
if(pref==2,choice==3){
if(c==3){
printf("\nPrice of Elantra");
printf(" Rs. 14,61,287");
}}
if(pref==2,choice==3){
if(c==4){
printf("\nPrice of Elite i20");
printf(" Rs. 5,49,350");
}}
if(pref==2,choice==3){
if(c==5){
printf("\nPrice of i10");
printf(" Rs. 4,29,726");
}}
if(pref==2,choice==4){
if(c==1){
printf("\nPrice of XUV 500");
printf(" Rs. 11,78,911");
}}
if(pref==2,choice==4){
if(c==2){
printf("\nPrice of Scorpio S10");

printf(" Rs. 12,75,000");
}}
if(pref==2,choice==4){
if(c==3){
printf("\nPrice of Quanto");
printf(" Rs. 6,77,680");
}}

if(pref==2,choice==4){
if(c==4){
printf("\nPrice of Thar");
printf(" Rs. 5,82,000");
}}
if(pref==2,choice==4){
if(c==5){
printf("\nPrice of Bolero");
printf(" Rs. 7,42,000");
}}
if(pref==2,choice==5){
if(c==1){
printf("\nPrice of Beat");
printf(" Rs. 4,07,000");
}}
if(pref==2,choice==5){
if(c==2){
printf("\nPrice of Spark");
printf(" Rs. 3,92,000");
}}
if(pref==2,choice==5){
if(c==3){
printf("\nPrice of Cruze");
printf(" Rs. 17,03,000");
}}
if(pref==2,choice==5){
if(c==4){
printf("\nPrice of Sail");

printf(" Rs. 4,41,800");
}}
if(pref==2,choice==5){
if(c==5){
printf("\nPrice of Tavera");
printf(" Rs. 8,32,800");
}}

if(pref==3,choice==1){
if(c==1){
printf("\n\nEMI for Brio"
"\nPrinciple = 4,27,700"
"\nRate of interest = 12.75");
emi=427700*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==1){
if(c==2){
printf("\nEMI for City"
"\nPrinciple = 7,71,800"
"\nRate of interest = 12.75");
emi=771000*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==1){
if(c==3){
printf("\nEMI for Amaze"
"\nPrinciple = 5,26,755"
"\nRate of interest = 12.75");
emi=526755*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==1){
if(c==3){
printf("\nEMI for Jazz"
"\nPrinciple = 4,45,200"
"\nRate of interest = 12.75");

emi=545200*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==1){
if(c==5){
printf("\nEMI for CR-V"
"\nPrinciple = 2,31,800"
"\nRate of interest = 12.75");
emi=231800*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==2){
if(c==1){
printf("\nEMI for Ciaz"
"\nPrinciple = 8,23,500"
"\nRate of interest = 12.75");
emi=823500*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==2){
if(c==2){
printf("\nEMI for Swift"
"\nPrinciple = 5,84,344"
"\nRate of interest = 12.75");
emi=584344*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==2){
if(c==3){
printf("\nEMI for Ritz"
"\nPrinciple = 5,53,205"
"\nRate of interest = 12.75");
emi=553205*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==2){
if(c==4){
printf("\nEMI for Eeco"
"\nPrinciple = 3,88,605"

"\nRate of interest = 12.75");
emi=388605*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==2){
if(c==5){
printf("\nEMI for Stingray"
"\nPrinciple = 4,26,572"
"\nRate of interest = 12.75");
emi=426572*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==3){
if(c==1){
printf("\nEMI for Xcent"
"\nPrinciple = 5,30,929"
"\nRate of interest = 12.75");
emi=530292*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==3){
if(c==2){
printf("\nEMI for EON"
"\nPrinciple = 3,20,664"
"\nRate of interest = 12.75");
emi=3206664*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==3){
if(c==3){
printf("\nEMI for Elantra"
"\nPrinciple = 14,61,287"
"\nRate of interest = 12.75");
emi=1461287*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==3){
if(c==4){

printf("\nEMI for Elite i20"
"\nPrinciple = 5,49,350"
"\nRate of interest = 12.75");
emi=549350*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==3){
if(c==5){
printf("\nEMI for i10"
"\nPrinciple = 4,29,726"
"\nRate of interest = 12.75");
emi=429726*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==4){
if(c==1){
printf("\nEMI for XUV 500"
"\nPrincipule = 11,78,911"
"\nRate of interest = 12.75");
emi=1178911*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==4){
if(c==2){
printf("\nEMI for Scorpio S10"
"\nPrinciple = 12,75,000"
"\nRate of interest = 12.75");
emi=1275000*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==4){
if(c==3){
printf("\nEMI for Quanto"
"\nPrinciple = 6,77,680"
"\nRate of interest = 12.75");
emi=677680*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}

if(pref==3,choice==4
){
if(c==4){
printf("\nEMI for Thar"
"\nPrinciple = 5,82,000"
"\nRate of interest = 12.75");
emi=582000*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==4){
if(c==5){
printf("\nEMI for Bolero"
"\nPrinciple = 7,42,000"
"\nRate of interest = 12.75");
emi=742000*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==5){
if(c==1){
printf("\nEMI for Beat"
"\nPrinciple = 4,07,000"
"\nRate of interest = 12.75");
emi=407000*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==5){
if(c==2){
printf("\nEMI for Spark"
"\nPrinciple = 3,92,000"
"\nRate of interest = 12.75");
emi=392000*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==5){
if(c==3){
printf("\nEMI for Cruze"
"\nPrinciple = 17,03,000"
"\nRate of interest = 12.75");

emi=1703000*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==5){
if(c==4){
printf("\nEMI for Sail"
"\nPrinciple = 4,41,800"
"\nRate of interest = 12.75");
emi=441800*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
if(pref==3,choice==5){
if(c==5){
printf("\nEMI for Tavera"
"\nPrinciple = 8,32,000"
"\nRate of interest = 12.75");
emi=832000*r*(1+r/36*100)/(1+r)/36-1;
printf("\nemi = %d",emi);
}}
getch();
}
