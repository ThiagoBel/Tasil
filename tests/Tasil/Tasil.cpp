#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <cstdio>

using namespace std;

string print(const string& texto) {
    cout << texto;
}

string printend(const string& textoend) {
    cout << textoend << endl;
}

string println(const string& textoln) {
    cout << textoln << "\n";
}

string os() {
    string OSTASIL;
    #ifdef _WIN32
        OSTASIL = "Windows";
    #elif defined(__linux__)
        OSTASIL = "Linux";
    #elif defined(__APPLE__)
        OSTASIL = "IOS";
    #elif defined(__unix__)
        OSTASIL = "Unix";
    #else
        OSTASIL = "?";
    #endif
    return OSTASIL;
}

string random(const int& min, const int& max) {
    static random_device rd;
    static mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    int randomNumber = dis(gen);
    return to_string(randomNumber);
}

string HelloWorld(const string& print) {
    if (print == "Print" || print == "print") {
        cout << "Hello, World!";
    } else if (print == "Println" || print == "println") {
        cout << "Hello, World!\n";
    } else {
        cout << "?" << endl;
    }
}

string ProcessTime() {
    clock_t start = clock();

    for (long i = 0; i < 100000000; ++i) {}

    clock_t end = clock();

    double elapsed_secs = double(end - start) / CLOCKS_PER_SEC;

    return to_string(elapsed_secs);
}

string nfile(const string& name) {
    ofstream arquivoa(name);
}

string nfilec(const string& namee, const string& content) {
    ofstream arquivo(namee);
    if (arquivo.is_open()) {
        arquivo << content << "\n";
    }
}

string cmd(const string& cmdd) {
    system(cmdd.c_str());
}

string ps(const string& cmddd) {
    system(("powershell.exe -Command " + cmddd).c_str());
}

bool tf(const bool& valor) {
    return valor;
}

bool testTasil(const bool& soun) {
    if (soun == true) {
        cout << "Teste do Tasil. ABCDEFGHIJKLMNOPQRSTUVWXYZ|abcdefghijklmnopqrstuvwxyz|0123456789|9876543210|7894561230|0321654987|-++-=--=/**/|\\,.<>;:^^~~``´´{{}}!@#$%¨&*()_" << endl;
    }
}

string autorun(const string& execcmd) {
    srand(time(nullptr));
    int numero = rand() % 2147483641 + 1;
    string nomeFile = "AUTORUNTASIL_KEY" + to_string(numero);
    ofstream tempfile(nomeFile + ".cpp");

    if (tempfile.is_open()) {
        tempfile << "// Autorun\n";
        tempfile << "#include <iostream>\n\n";
        tempfile << "int main() {\n";
        tempfile << execcmd;
        tempfile << "} // End Autorun";
        tempfile.close();
        system(("g++ " + nomeFile + ".cpp -o " + nomeFile).c_str());

        #ifdef _WIN32
            system((nomeFile + ".exe").c_str());
            remove((nomeFile + ".exe").c_str());
        #else
            system(("./" + nomeFile).c_str());
            remove(nomeFile.c_str());
        #endif

        remove((nomeFile + ".cpp").c_str());
    } else {
        return "Erro.";
    }

    return "Executado e limpo.";
}

string autorunnb(const string& execccmd) {
    srand(time(nullptr));
    int numeroo = rand() % 2147483641 + 1;
    string nomeFileo = "AUTORUNTASIL_KEY" + to_string(numeroo);
    ofstream tempfileo(nomeFileo + ".cpp");

    if (tempfileo.is_open()) {
        tempfileo << execccmd;
        tempfileo.close();
        system(("g++ " + nomeFileo + ".cpp -o " + nomeFileo).c_str());

        #ifdef _WIN32
            system((nomeFileo + ".exe").c_str());
            remove((nomeFileo + ".exe").c_str());
        #else
            system(("./" + nomeFileo).c_str());
            remove(nomeFileo.c_str());
        #endif

        remove((nomeFileo + ".cpp").c_str());
    } else {
        return "Erro.";
    }

    return "Executado e limpo.";
}

string versionCM(const string& chavezinha) {
    string base = chavezinha + " --version";

    system(base.c_str());
}

string helpCM(const string& chavezinhaa) {
    string basea = chavezinhaa + " --help";

    system(basea.c_str());
}

string readfile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) return "Erro ao abrir o arquivo.";

    string linha, conteudo;
    while (getline(file, linha)) {
        conteudo += linha + "\n";
    }
    file.close();
    return conteudo;
}

string del(const string& nome) {
    remove(nome.c_str());
}

string repeat(const string& texto, int vezes) {
    string resultado;
    for (int i = 0; i < vezes; ++i) {
        resultado += texto;
    }
    return resultado;
}

string wait(double seconds) {
    clock_t end_time = clock() + static_cast<clock_t>(seconds * CLOCKS_PER_SEC);
    while (clock() < end_time) {}
    return " ";
}

string datetime() {
    time_t agora = time(0);
    tm* tempo = localtime(&agora);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%d/%m/%Y %H:%M:%S", tempo);
    return string(buffer);
}

string upper(const string& texto) {
    string r = texto;
    for (char& c : r) c = toupper(c);
    return r;
}

string lower(const string& texto) {
    string r = texto;
    for (char& c : r) c = tolower(c);
    return r;
}

bool havefile(const string& filename) {
    ifstream f(filename);
    return f.good();
}

template<typename T>
void debug(const string& label, T valor) {
    cout << "[DEBUG] " << label << ": " << valor << endl;
}

string reverse(const string& texto) {
    return string(texto.rbegin(), texto.rend());
}

bool contains(const string& texto, const string& sub) {
    return texto.find(sub) != string::npos;
}
string cls() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

string getUsername() {
    #ifdef _WIN32
        char* user = getenv("USERNAME");
    #else
        char* user = getenv("USER");
    #endif
    return user ? string(user) : "Desconhecido";
}

string tasilVersion() {
    return "T25";
}

std::string backpack_put(const std::string& idt, const std::string& text) {
    std::ofstream backpackfile("Tasil/Backpacks/" + idt + ".backpacktasil");
    if (backpackfile.is_open()) {
        backpackfile << text;
        backpackfile.close();
        return " ";
        // system(("move " + idt + ".backpacktasil Tasil/Backpacks").c_str());
    } else {
        return "Erro na criação do arquivo backpack.";
    }
}

std::string backpack_open(const std::string& ido) {
    std::ifstream arquivoguardado("Tasil/Backpacks/" + ido + ".backpacktasil");

    if (arquivoguardado.is_open()) {
        std::string texto;

        while (getline(arquivoguardado, texto)) {
            return texto;
        }
        return " ";
    } else {
        return "ID não encontrado.";
    }
}

std::string backpack_remove(const std::string& idr) {
    std::string caminho = "Tasil/Backpacks/" + idr + ".backpacktasil";
    std::ifstream arquivo(caminho.c_str());
    
    if (arquivo.is_open()) {
        arquivo.close();
        if (std::remove(caminho.c_str()) == 0) {
            return "ID removido com sucesso.";
        } else {
            return "Erro ao deletar o ID.";
        }
        return " ";
    } else {
        return "ID não encontrado.";
    }
}