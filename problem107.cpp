#include <bits/stdc++.h>//memset
using namespace std;

#define ll long long
#define imi INT_MIN
#define ima INT_MAX
#define llmi LLONG_MIN
#define llma LLONG_MAX
#define dmi (double)llmi
#define dma (double)llma
#define forn(i,a,b) for(ll i = a; i < b; i++)
#define forn2(i,a,b) for(ll i = a; i >= b; i--) 
#define fork(i,a,b,k) for(ll i = a; i <= b; i+=k)
#define fork2(i,a,b,k) for(ll i = a; i>=b; i-=k)
#define vl vector<ll>
#define eb emplace_back
#define ef emplace_front
#define ppf pop_front
#define ppb pop_back
#define gt greater<int>()
#define w(t) while(t--)

const int nmax = 1e6+1;
const int mod = 1e9+7;
const double eps = 1e-9;

/*
Data extracted from extract107.py

1 4 427
1 5 668
1 6 495
1 7 377
1 8 678
1 10 177
1 13 870
1 15 869
1 16 624
1 17 300
1 18 609
1 19 131
1 21 251
1 25 856
1 26 221
1 27 514
1 29 591
1 30 762
1 31 182
1 32 56
1 34 884
1 35 412
1 36 273
1 37 636
1 40 774
2 3 262
2 6 508
2 7 472
2 8 799
2 10 956
2 11 578
2 12 363
2 13 940
2 14 143
2 16 162
2 17 122
2 18 910
2 20 729
2 21 802
2 22 941
2 23 922
2 24 573
2 25 531
2 26 539
2 27 667
2 28 607
2 30 920
2 33 315
2 34 649
2 35 937
2 37 185
2 38 102
2 39 636
2 40 289
3 5 926
3 7 958
3 8 158
3 9 647
3 10 47
3 11 621
3 12 264
3 13 81
3 15 402
3 16 813
3 17 649
3 18 386
3 19 252
3 20 391
3 21 264
3 22 637
3 23 349
3 27 108
3 29 727
3 30 225
3 31 578
3 32 699
3 34 898
3 35 294
3 37 575
3 38 168
3 39 432
3 40 833
4 5 366
4 8 635
4 10 32
4 11 962
4 12 468
4 13 893
4 14 854
4 15 718
4 16 427
4 17 448
4 18 916
4 19 258
4 21 760
4 22 909
4 23 529
4 24 311
4 25 404
4 28 588
4 29 680
4 30 875
4 32 615
4 34 409
4 35 758
4 36 221
4 39 76
4 40 257
5 8 250
5 9 268
5 11 503
5 12 944
5 14 677
5 16 727
5 17 793
5 18 457
5 19 981
5 20 191
5 24 351
5 25 969
5 26 925
5 27 987
5 28 328
5 29 282
5 30 589
5 32 873
5 33 477
5 36 19
5 37 450
6 8 765
6 9 711
6 10 819
6 11 305
6 12 302
6 13 926
6 16 582
6 18 861
6 20 683
6 21 293
6 24 66
6 26 27
6 29 290
6 31 786
6 33 554
6 34 817
6 35 33
6 37 54
6 38 506
6 39 386
6 40 381
7 10 120
7 11 42
7 13 134
7 14 219
7 15 457
7 16 639
7 17 538
7 18 374
7 22 966
7 28 449
7 29 120
7 30 797
7 31 358
7 32 232
7 33 550
7 35 305
7 36 997
7 37 662
7 38 744
7 39 686
7 40 239
8 10 35
8 12 106
8 13 385
8 14 652
8 15 160
8 17 890
8 18 812
8 19 605
8 20 953
8 24 79
8 26 712
8 27 613
8 28 312
8 29 452
8 31 978
8 32 900
8 34 901
8 37 225
8 38 533
8 39 770
8 40 722
9 10 283
9 12 172
9 14 663
9 15 236
9 16 36
9 17 403
9 18 286
9 19 986
9 22 810
9 23 761
9 24 574
9 25 53
9 26 793
9 29 777
9 30 330
9 31 936
9 32 883
9 33 286
9 35 174
9 39 828
9 40 711
10 11 50
10 13 565
10 14 36
10 15 767
10 16 684
10 17 344
10 18 489
10 19 565
10 22 103
10 23 810
10 24 463
10 25 733
10 26 665
10 27 494
10 28 644
10 29 863
10 30 25
10 31 385
10 33 342
10 34 470
10 38 730
10 39 582
10 40 468
11 12 155
11 13 519
11 16 256
11 17 990
11 18 801
11 19 154
11 20 53
11 21 474
11 22 650
11 23 402
11 27 966
11 30 406
11 31 989
11 32 772
11 33 932
11 34 7
11 36 823
11 37 391
11 40 933
12 15 380
12 16 438
12 18 41
12 19 266
12 22 104
12 23 867
12 24 609
12 26 270
12 27 861
12 30 165
12 32 675
12 33 250
12 34 686
12 35 995
12 36 366
12 37 191
12 39 433
13 14 313
13 15 851
13 19 248
13 20 220
13 22 826
13 23 359
13 24 829
13 26 234
13 27 198
13 28 145
13 29 409
13 30 68
13 31 359
13 33 814
13 34 218
13 35 186
13 38 929
13 39 203
14 15 132
14 17 433
14 18 598
14 21 168
14 22 870
14 26 128
14 27 437
14 29 383
14 30 364
14 31 966
14 32 227
14 35 807
14 36 993
14 39 526
14 40 17
15 17 596
15 18 903
15 19 613
15 20 730
15 22 261
15 24 142
15 25 379
15 26 885
15 27 89
15 29 848
15 30 258
15 31 112
15 33 900
15 36 818
15 37 639
15 38 268
15 39 600
16 17 539
16 18 379
16 19 664
16 20 561
16 21 542
16 23 999
16 24 585
16 27 321
16 28 398
16 31 950
16 32 68
16 33 193
16 35 697
16 37 390
16 38 588
16 39 848
17 19 73
17 21 318
17 24 500
17 26 968
17 28 291
17 31 765
17 32 196
17 33 504
17 34 757
17 36 542
17 38 395
17 39 227
17 40 148
18 20 946
18 21 136
18 22 399
18 24 941
18 25 707
18 26 156
18 27 757
18 28 258
18 29 251
18 31 807
18 35 461
18 36 501
18 39 616
19 20 686
19 23 575
19 24 627
19 25 817
19 26 282
19 28 698
19 29 398
19 30 222
19 32 649
19 38 654
20 22 389
20 23 729
20 24 553
20 25 304
20 26 703
20 27 455
20 28 857
20 29 260
20 31 991
20 32 182
20 33 351
20 34 477
20 35 867
20 38 889
20 39 217
20 40 853
21 23 392
21 27 267
21 28 407
21 29 27
21 30 651
21 31 80
21 32 927
21 34 974
21 35 977
21 38 457
21 39 117
22 24 202
22 29 867
22 30 140
22 31 403
22 32 962
22 33 785
22 35 511
22 37 1
22 39 707
23 24 388
23 25 939
23 27 959
23 29 83
23 30 463
23 31 361
23 34 512
23 35 931
23 37 224
23 38 690
23 39 369
24 25 164
24 26 829
24 28 620
24 29 523
24 30 639
24 31 936
24 34 490
24 36 695
24 38 505
24 39 109
25 27 616
25 28 716
25 29 728
25 31 889
25 32 349
25 34 963
25 35 150
25 36 447
25 38 292
25 39 586
25 40 264
26 28 822
26 32 736
26 33 576
26 35 697
26 36 946
26 37 443
26 39 205
26 40 194
27 29 349
27 30 156
27 31 339
27 33 102
27 34 790
27 35 359
27 37 439
27 38 938
27 39 809
27 40 260
28 29 293
28 30 486
28 31 943
28 33 779
28 35 6
28 36 880
28 37 116
28 38 775
28 40 947
29 30 212
29 31 684
29 32 505
29 33 341
29 34 384
29 35 9
29 36 992
29 37 507
29 38 48
30 32 349
30 33 723
30 36 186
30 38 36
30 39 240
30 40 752
31 32 965
31 33 302
31 34 676
31 35 725
31 37 327
31 38 134
31 40 147
32 33 474
32 34 178
32 35 833
32 38 555
32 39 853
33 34 689
33 38 451
34 35 245
34 36 596
34 37 445
34 40 343
35 36 949
35 38 270
35 40 112
36 37 91
36 39 768
36 40 273
37 38 248
37 40 344
38 39 371
38 40 680
39 40 540

*/
struct node {
	ll x, y, w;
};
ll rt[41], sz[41];
void init() {
	forn(i,1,41) {
		rt[i] = i;
		sz[i] = 1;
	}
}

ll f(ll x) {
	return (x == rt[x] ? x : rt[x] = f(rt[x]));
}
void dsu(ll x, ll y) {
	ll a = f(x), b = f(y);
	if(a != b) {
		if(sz[a] < sz[b]) swap(a,b);
		rt[b] = a;
		sz[a] += sz[b];
	}
}
bool check(node p, node q) {
	return p.w < q.w;
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	ll m,n,x,y,z,t,l,k;
	string s,s1,s2;
	//
	init();
	ll sum = 0;
	node a[513];
	ll len = 513;
	forn(i,0,513) {
		cin >> a[i].x >> a[i].y >> a[i].w;
		sum += a[i].w;
	}
	sort(a, a+len, check);
	forn(i,0,len) {
		if(f(a[i].x) != f(a[i].y)) {
			dsu(a[i].x, a[i].y);
			sum -= a[i].w;
		}
	}
	cout << sum;
}
