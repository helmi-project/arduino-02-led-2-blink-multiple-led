/*
   TUTORIAL LED BERKEDIP BERGANTIAN PADA ARDUINO
   D4 -> Led Merah
   D5 -> Led Hijau
   D6 -> Led Biru
   D7 -> Led Kuning   

*/

#define merah 4 
#define hijau 5 
#define biru 6 
#define kuning 7 

void setup() {
  pinMode(merah, OUTPUT); //set menjadi output
  pinMode(hijau, OUTPUT); //set menjadi output
  pinMode(biru, OUTPUT); //set menjadi output
  pinMode(kuning, OUTPUT); //set menjadi output
}

void loop() {
  digitalWrite(kuning, HIGH); //menyalakan led kuning (memberi tegangan 5V)
  digitalWrite(biru, LOW); //mematikan led biru(memberi tegangan 0V)
  digitalWrite(hijau, LOW); //mematikan led hijau(memberi tegangan 0V)
  digitalWrite(merah, LOW); //mematikan led merah(memberi tegangan 0V)
  delay(500); //jeda waktu 1/2 detik, kuning akan tetap menyala dan sisanya akan tetap mati selama 1/2 detik

  digitalWrite(kuning, LOW); //mematikan led kuning (memberi tegangan 0V)
  digitalWrite(biru, HIGH); //menyalakan led biru(memberi tegangan 5V)
  digitalWrite(hijau, LOW); //mematikan led hijau(memberi tegangan 0V)
  digitalWrite(merah, LOW); //mematikan led merah(memberi tegangan 0V)
  delay(500); //jeda waktu 1/2 detik, biru akan tetap menyala dan sisanya akan tetap mati selama 1/2 detik

  digitalWrite(kuning, LOW); //mematikan led kuning (memberi tegangan 0V)
  digitalWrite(biru, LOW); //mematikan led biru(memberi tegangan 0V)
  digitalWrite(hijau, HIGH); //menyalakan led hijau(memberi tegangan 5V)
  digitalWrite(merah, LOW); //mematikan led merah(memberi tegangan 0V)
  delay(500); //jeda waktu 1/2 detik, biru akan tetap menyala dan sisanya akan tetap mati selama 1/2 detik

  digitalWrite(kuning, LOW); //mematikan led kuning (memberi tegangan 0V)
  digitalWrite(biru, LOW); //mematikan led biru(memberi tegangan 0V)
  digitalWrite(hijau, LOW); //mematikan led hijau(memberi tegangan 0V)
  digitalWrite(merah, HIGH); //menyalakan led merah(memberi tegangan 5V)
  delay(500); //jeda waktu 1/2 detik, biru akan tetap menyala dan sisanya akan tetap mati selama 1/2 detik
}
