#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void welcomePage(){
    cout<< "Want To Know Your MBIT Personality ?"<<endl;
    cout<< "Just answer these trustfully"<< endl;
    cout<<"----------------------------------------------"<<endl;
    

}
string personalityQuiz (){
    int score_EI = 0;
    int score_SN = 0;
    int score_TF= 0;
    int score_JP = 0;
    string mbit = "";
    int answer ;
    
    
    cout<< "Do you feel energized after socializing in large groups?"<<endl;
    cout<< "Press 1. for Yes and 2. for No"<<endl;
    cin>> answer;
    if (answer == 1) {
        score_EI++;
    } else score_EI--;

    cout<<"Do you prefer talking through ideas rather than reflecting alone?"<<endl;
    cout<< "Press 1. for Yes and 2. for No"<<endl;
    cin>> answer;
    if (answer == 1) {
        score_EI++;
    } else score_EI--;
    
    cout<<"Do you prefer hands-on experience over theory?"<<endl;
    cout<< "Press 1. for Yes and 2. for No"<<endl;
    cin>>answer;
    if (answer == 1) {
        score_SN++;
    } else score_SN--;

    cout<<"Are you more interested in facts than possibilities?"<<endl;
    cout<< "Press 1. for Yes and 2. for No"<<endl;
    cin>>answer;
    if (answer == 1) {
        score_SN++;
    } else score_SN--;
    
    cout<<"Do you value logic over emotions in decision-making?"<<endl;
    cout<< "Press 1. for Yes and 2. for No"<<endl;
    cin>>answer;
    if (answer == 1) {
        score_TF++;
    } else score_TF--;

    cout<<"Is being fair more important than being kind?"<<endl;
    cout<< "Press 1. for Yes and 2. for No"<<endl;
    cin>>answer;
    if (answer == 1) {
        score_TF++;
    } else score_TF--;

    cout<<"Do you prefer to follow a detailed plan rather than go with the flow?"<<endl;
    cout<< "Press 1. for Yes and 2. for No"<<endl;
    cin>>answer;
    if (answer == 1) {
        score_JP++;
    } else score_JP--;
    
    cout<<"Do you feel uncomfortable when plans change suddenly?"<<endl;
    cout<< "Press 1. for Yes and 2. for No"<<endl;
    cin>>answer;
    if (answer == 1) {
        score_JP++;
    } else score_JP--;

    //calculation
    
    mbit += ( score_EI >= 1 )? "E":"I";
    mbit += ( score_SN >= 1 )? "S":"N";
    mbit += ( score_TF >= 1 )? "T":"F";
    mbit += ( score_JP >= 1 )? "J":"P";
    return mbit;

}
void explainPersonality(string mbit){
    if (mbit== "INFJ"){
        cout<<" INFJ – The Mystic Soul"<<endl;
        cout<<"You feel deeply, think deeply, and love even deeper. You're a dreamer who sees the world not just for what it is, but for what it could be. Mysterious and intuitive, you often guide others through storms, even when you're weathering your own."<<endl;

    }else if (mbit=="INFP"){
        cout<<"INFP – The Gentle Idealist"<<endl;
        cout<<"You carry galaxies in your heart. Sensitive, creative, and driven by meaning, you chase authenticity like fireflies in the dark. You write poems in your mind and believe love can heal the world."<<endl;

    }else if (mbit== "ENFJ"){
        cout<<"ENFJ – The Warm Leader"<<endl;
        cout<<"You light up rooms with your empathy and vision. People gravitate to your energy, and you lead not with force, but with heart. You care deeply and endlessly, sometimes forgetting to pause for yourself."<<endl;


    }else if (mbit=="ENFP"){
        cout<<"ENFP – The Spark"<<endl;
        cout<<"You’re a confetti storm of creativity and chaos. Wild-hearted and free-spirited, you're always chasing the next magical moment. You see potential everywhere — in people, in art, in the tiniest details."<<endl;

    }else if(mbit=="ISFJ"){
        cout<<"ISFJ – The Quiet Guardian"<<endl;
        cout<<"Soft-spoken but unwavering, you love in the details. You remember birthdays, sense others’ needs before they’re voiced, and find purpose in caring. Your heart is a sanctuary of loyalty."<<endl;

    }else if(mbit=="ISFP"){
        cout<<"ISFP – The Aesthetic Soul"<<endl;
        cout<<"You live through feeling — a sunset, a song, a glance. You’re peaceful yet passionate, quietly rebellious, and guided by a need for beauty and honesty in all things."<<endl;

    }else if(mbit=="ESFJ"){
        cout<<"ESFJ – The Heart of the Room"<<endl;
        cout<<"You make everyone feel seen. Organized and nurturing, you love when people are together and smiling. You bring cookies, fix problems, and somehow always know when something’s wrong."<<endl;

    }else if (mbit=="ESFP"){
        cout<<"ESFP – The Radiant Performer"<<endl;
        cout<<"Life is your stage, and you shine like sunlight through sequins. You love deeply, laugh loudly, and feel every emotion like it’s glittering through your skin. You remind others to live now"<<endl;

    }else if (mbit=="ISTJ"){
        cout<<"ISTJ – The Loyal Architect"<<endl;
        cout<<"You’re steady, responsible, and quietly brilliant. Your world is built on facts, routine, and integrity. You don’t show off, but you always show up — and that’s your superpower."<<endl;

    }else if (mbit=="ISTP"){
        cout<<"ISTP – The Lone Adventurer"<<endl;
        cout<<"Cool, composed, and curious, you explore the world with quiet confidence. You prefer doing over talking and value freedom above all. Whether fixing something or breaking norms, you do it your own way."<<endl;

    }else if(mbit== "ESTJ"){
        cout<<" ESTJ – The Power Planner"<<endl;
        cout<<"Organized and direct, you're the go-to person when something needs structure. You thrive in leadership roles, value tradition, and have a no-nonsense attitude that people secretly admire."<<endl;
     }else if (mbit== "ESTP"){
        cout<<"The Bold Risk-Taker";
        cout<<"You’re spontaneous, daring, and endlessly charming. Adventure is your comfort zone. You dive into life headfirst — testing limits, chasing excitement, and dragging everyone else into your fun chaos."<<endl;
     }else if (mbit == "INTJ") {
    cout << "The Strategic Visionary" << endl;
    cout << "You’re a quiet storm of insight and ambition. Future-focused and goal-oriented, you build blueprints for success in your mind. You don’t follow paths — you create them." << endl;
    }else if (mbit == "INTP") {
    cout << "The Thought Wanderer" << endl;
    cout << "You’re the philosopher of the digital age. Analytical, quirky, and constantly curious, you live in theories and thrive in abstraction. People may not always get you — but they’ll remember you." << endl;
    }else if (mbit == "ENTJ") {
    cout << "The Executive Firestarter" << endl;
    cout << "Confident, commanding, and driven, you were born to lead. You see inefficiencies and fix them before others notice. Your intensity isn’t harsh — it’s purposeful." << endl;
    }else if (mbit == "ENTP") {
    cout << "The Brilliant Chaos" << endl;
    cout << "You’re the brainstorm in human form. Playful, inventive, and fast-talking, you love to debate, challenge norms, and create new systems — often all at once. You’re unpredictable in the best way." << endl;
}
}
void emotionBar(string emotion, int percentage) {
    int barLength = 20;
    int filled = (percentage * barLength) / 100;

    cout << setw(14) << left << emotion << ": [";
    for (int i = 0; i < filled; i++) cout << "█";
    for (int i = filled; i < barLength; i++) cout << " ";
    cout << "] " << percentage << "%" << endl;

    cout << endl;
}



void showEmotionalChart(string mbti) {
     cout << "\nEMOTIONAL PROFILE"<<endl;
     if (mbti == "INFJ") {
    emotionBar("Empathy", 40);
    emotionBar("Idealism", 30);
    emotionBar("Overthinking", 20);
    emotionBar("Anxiety", 10);
} else if (mbti == "INFP") {
    emotionBar("Idealism", 35);
    emotionBar("Sensitivity", 30);
    emotionBar("Creativity", 20);
    emotionBar("Self-Doubt", 15);
} else if (mbti == "INTJ") {
    emotionBar("Determination", 40);
    emotionBar("Strategic Focus", 30);
    emotionBar("Independence", 20);
    emotionBar("Impatience", 10);
} else if (mbti == "INTP") {
    emotionBar("Curiosity", 35);
    emotionBar("Analytical Calm", 30);
    emotionBar("Overthinking", 25);
    emotionBar("Detachment", 10);
} else if (mbti == "ENFJ") {
    emotionBar("Empathy", 35);
    emotionBar("Leadership", 30);
    emotionBar("Idealism", 20);
    emotionBar("Stress", 15);
} else if (mbti == "ENFP") {
    emotionBar("Excitement", 35);
    emotionBar("Spontaneity", 30);
    emotionBar("Inspiration", 20);
    emotionBar("Restlessness", 15);
} else if (mbti == "ENTJ") {
    emotionBar("Confidence", 40);
    emotionBar("Drive", 30);
    emotionBar("Control", 20);
    emotionBar("Frustration", 10);
} else if (mbti == "ENTP") {
    emotionBar("Excitement", 35);
    emotionBar("Curiosity", 30);
    emotionBar("Restlessness", 25);
    emotionBar("Playfulness", 10);
} else if (mbti == "ISFJ") {
    emotionBar("Kindness", 35);
    emotionBar("Responsibility", 30);
    emotionBar("Worry", 20);
    emotionBar("Warmth", 15);
} else if (mbti == "ISFP") {
    emotionBar("Gentleness", 30);
    emotionBar("Creativity", 30);
    emotionBar("Peacefulness", 25);
    emotionBar("Shyness", 15);
} else if (mbti == "ISTJ") {
    emotionBar("Duty", 40);
    emotionBar("Focus", 30);
    emotionBar("Stability", 20);
    emotionBar("Frustration", 10);
} else if (mbti == "ISTP") {
    emotionBar("Calm", 35);
    emotionBar("Precision", 30);
    emotionBar("Independence", 25);
    emotionBar("Aloofness", 10);
} else if (mbti == "ESFJ") {
    emotionBar("Warmth", 35);
    emotionBar("Sociability", 30);
    emotionBar("Empathy", 20);
    emotionBar("Insecurity", 15);
} else if (mbti == "ESFP") {
    emotionBar("Joy", 35);
    emotionBar("Spontaneity", 30);
    emotionBar("Charm", 20);
    emotionBar("Avoidance", 15);
} else if (mbti == "ESTJ") {
    emotionBar("Leadership", 40);
    emotionBar("Discipline", 30);
    emotionBar("Responsibility", 20);
    emotionBar("Impatience", 10);
} else if (mbti == "ESTP") {
    emotionBar("Boldness", 35);
    emotionBar("Adventure", 30);
    emotionBar("Excitement", 25);
    emotionBar("Impulsiveness", 10);
}

    

}
int main(){
    welcomePage();
    string mbit = personalityQuiz ();
    cout<<"Your MBIT personality is:"<<mbit <<endl;
    cout<<endl;
    explainPersonality( mbit);
    cout<<"Your Emotional Breakdown:"<<endl;
    showEmotionalChart(mbit);
    cout<<"Thanks! Keep discovering your inner self"<<endl;
    return 0;


}

   




