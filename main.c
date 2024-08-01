#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <io.h>
#include <fcntl.h>

int main(void)
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    SetConsoleOutputCP(CP_UTF8);
    getchar();
    wprintf(L"(Enterキーで次に進む)\n");
    getchar();
    wprintf(L"Ａさんは、大学に居場所がありません。\n友人はおらず、誰とも話せないまま大学生活を過ごしています。");
    getchar();
    wprintf(L"勉学への熱意が皆無なＡさんは、孤独感に苛まれながらも義務感だけで大学に来続けているのです。");
    getchar();
    wprintf(L"さて、これからＡさんの心の中を覗いてみましょう。\nそこから何を感じるか、何を思うかは、あなた次第です。\n");
    getchar();

    int a[20];
    int i, j, k,x,tmp;
    do{
        srand(time(NULL));
        k = 0;
        for (i = 0; i < 20; i++) {
            a[i] = i + 1;
            j = rand() % (i + 1);
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }

        wprintf(L"Now Looding……\n\n");
        clock_t start_time;
        start_time = clock();
        while (clock() < start_time + 5 * CLOCKS_PER_SEC) {}

        for (i = 0; i < 10; i++) {
            if (a[i] == 1) {
                wprintf(L"幸せそうな人間が憎い。\n");
                getchar();
            }
            if (a[i] == 2) {
                wprintf(L"気持ち悪い。\n");
                getchar();
            }
            if (a[i] == 3) {
                wprintf(L"全部自分の行動の結果だ。\n");
                getchar();
            }
            if (a[i] == 4) {
                wprintf(L"非情な現実が人の心を殺す。ヒトだけが持つ能力を奪っていく。");
                getchar();
                wprintf(L"……人の心が死んだ、社会の歯車にはなりたくない。\n");
                getchar();
            }
            if (a[i] == 5) {
                wprintf(L"死にたい。");
                getchar();
                wprintf(L"『死にたい』とか、死ぬ気も無いくせに。\n");
                getchar();
            }
            if (a[i] == 6) {
                wprintf(L"自分は結局何がしたいんだ。\n");
                getchar();
            }
            if (a[i] == 7) {
                wprintf(L"自分の欲望のためだけに行動し、他者を蔑ろにする『悪』にはなりたくない。\n");
                getchar();
            }
            if (a[i] == 8) {
                wprintf(L"また一日無駄にした。\n");
                getchar();
            }
            if (a[i] == 9) {
                wprintf(L"自分は高尚な人間じゃない。\n");
                getchar();
            }
            if (a[i] == 10) {
                wprintf(L"誰も自分を分かってくれない。\n");
                getchar();
            }
            if (a[i] == 11) {
                wprintf(L"寂しい。\n");
                getchar();
            }
            if (a[i] == 12) {
                wprintf(L"息苦しい。\n");
                getchar();
            }
            if (a[i] == 13) {
                wprintf(L"誰か助けて。");
                getchar();
                wprintf(L"誰も助けてはくれない。誰もが各々の抱えているもので精一杯なのだから。\n");
                getchar();
            }
            if (a[i] == 14) {
                wprintf(L"なんで満たされてる人間が他人を思いやれないんだ。");
                getchar();
                wprintf(L"誰も助けてくれない現状に対する自分本位な愚痴だろう。\n");
                getchar();
            }
            if (a[i] == 15) {
                wprintf(L"目の前のことが随分遠くに感じる。\n");
                getchar();
            }
            if (a[i] == 16) {
                wprintf(L"大学が嫌いだ。");
                getchar();
                wprintf(L"他者を蔑ろにして、規律を盾に自分を守るだけの世界の仕組みが嫌いだ。\n");
                getchar();
            }
            if (a[i] == 17) {
                wprintf(L"自分は異常。周囲に適応できない者に人権は無いんだ。\n");
                getchar();
            }
            if (a[i] == 18) {
                wprintf(L"他の人にも各々の事情があるのかな。\n");
                getchar();
            }
            if (a[i] == 19) {
                wprintf(L"現状から逃げれるならとっくにそうしてる。\n");
                getchar();
            }
            if (a[i] == 20) {
                wprintf(L"自分が苦しんでいるのは全部自分のせいだ。\n");
                getchar();
            }
        }

        start_time = clock();
        while (clock() < start_time + 3 * CLOCKS_PER_SEC) {}
        wprintf(L"\nお疲れ様です。\n最後に……\n");
        start_time = clock();
        while (clock() < start_time + 3 * CLOCKS_PER_SEC) {}

        k = (rand() % 5) + 1;
        if (k == 1) {
            wprintf(L"今ある幸せが当たり前だと思うな。\n");
        }
        if (k == 2) {
            wprintf(L"思考を放棄したヒトを人間とは呼ばない。");
            getchar();
            wprintf(L"ロボットと同等かそれ未満の木偶だ。\n");

        }
        if (k == 3) {
            wprintf(L"他者を慮った上で抱く欲望を『善意』と呼ぶ。\n");
        }
        if (k == 4) {
            wprintf(L"心を腐らすな。");
            getchar();
            wprintf(L"心が衰え、諦めを覚えたヒトの人生ほど空虚なモノはないのだから。\n");
        }
        if (k == 5) {
            wprintf(L"夢見るだけの人間に夢は叶えられない。");
            getchar();
            wprintf(L"夢を現実的に考える、冷めた人間だけが夢を叶えられる。");
            getchar();
            wprintf(L"童心を失った、色褪せた夢を。\n");
        }
        getchar();
        wprintf(L"続けますか？\nYES:0 NO:他の数\n");
        scanf_s("%d", &x);
        wprintf(L"\n\n\n");
        getchar();
    }while (x == 0);

    return 0;
}