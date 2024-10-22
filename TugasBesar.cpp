int main() {
    int N; // Jumlah barang
    std::cin >> N;
    std::vector<Barang> barangList;

    for (int i = 0; i < N; i++) {
        std::string nama;
        int harga, berat, stock;
        std::cin >> nama >> harga >> berat >> stock;
        barangList.push_back(Barang(nama, harga, berat, stock));
    }

    int M; // Jumlah pelanggan
    std::cin >> M;
    std::vector<Pelanggan> pelangganList;

    for (int i = 0; i < M; i++) {
        std::string nama;
        int uang;
        std::cin >> nama >> uang;
        pelangganList.push_back(Pelanggan(nama, uang));
    }

    int P; // Jumlah perintah
    std::cin >> P;
    for (int i = 0; i < P; i++) {
        std::string command;
        std::cin >> command;
        // Proses perintah ADD, TOTAL_HARGA, KASIR, CEK_UANG
    }

    return 0;
}

//Ini contoh komen


