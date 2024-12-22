#include <iostream>

using namespace std;

void findEvenNumbers(int A[], int N, bool &foundEven) {
    // Basis rekursif: jika sudah mencapai awal array
    if (N == 0) {
        if (foundEven == false) {
            cout << -1;
        }
        return;
    } else {
        if (A[N] % 2 == 0) {
            cout << A[N] << " "; 
            foundEven = true;
        }
        findEvenNumbers(A, N-1, foundEven);
    }
}

int main() {
    // int N = 300;
    // int A[] = {53, 221, 853, 408, 484, 412, 472, 661, 576, 674, 127, 737, 134, 689, 337, 972, 966, 350, 578, 10,
    // 317, 177, 5, 854, 638, 69, 510, 42, 716, 925, 852, 685, 547, 715, 198, 579, 717, 49, 173, 369, 875, 602, 990,
    // 447, 851, 558, 883, 392, 803, 416, 132, 322, 623, 922, 111, 824, 508, 672, 763, 446, 1000, 801, 356, 450,
    // 140, 464, 829, 628, 989, 314, 697, 80, 541, 794, 752, 134, 175, 768, 692, 160, 332, 949, 925, 757, 24, 318,
    // 196, 807, 831, 936, 990, 871, 468, 427, 459, 987, 173, 684, 906, 709, 883, 296, 302, 30, 611, 212, 854, 85,
    // 545, 84, 866, 650, 970, 247, 843, 123, 760, 273, 874, 413, 639, 517, 752, 994, 746, 338, 171, 417, 930, 643,
    // 814, 975, 295, 878, 34, 918, 954, 136, 230, 272, 686, 544, 458, 548, 956, 127, 657, 564, 466, 772, 530, 653,
    // 262, 988, 46, 347, 511, 73, 595, 92, 15, 167, 173, 457, 219, 701, 132, 329, 722, 785, 538, 911, 522, 549, 96,
    // 268, 57, 530, 354, 506, 998, 561, 591, 866, 883, 53, 820, 809, 119, 567, 989, 786, 489, 281, 883, 615, 445,
    // 210, 860, 33, 601, 310, 551, 155, 933, 2, 164, 309, 482, 380, 208, 460, 60, 595, 861, 246, 223, 701, 726, 4,
    // 653, 479, 831, 649, 543, 908, 747, 762, 481, 880, 184, 669, 87, 587, 989, 185, 923, 912, 938, 349, 619, 330,
    // 386, 826, 539, 178, 702, 447, 888, 623, 684, 313, 330, 657, 695, 526, 155, 715, 2, 504, 311, 277, 347, 150,
    // 663, 817, 835, 412, 764, 381, 868, 947, 987, 530, 622, 679, 940, 790, 782, 221, 519, 369, 154, 473, 17, 788,
    // 724, 335, 892, 169, 399, 17, 565, 236, 734, 755, 336, 432, 589, 939};
    int N = 4;
    int A[] = {1, 3, 5, 4};
    bool foundEven = false;
    // Memulai rekursi dari index N-1
    findEvenNumbers(A, N-1, foundEven);
    
    return 0;
}
