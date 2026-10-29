#include <stdio.h>

int main() {

    float assignmentScore;
    float midExam;
    float finalExam;
    printf("Masukkan nilai Assignment: ", assignmentScore); scanf("%f", &assignmentScore);
    printf("Masukkan nilai Mid Exam: ", midExam); scanf(" %f", &midExam);
    printf("Masukkan nilai Final Exam: ", finalExam); scanf(" %f", &finalExam);

    float finalAssignment_score = assignmentScore * 0.2;
    float finalMid_exam = midExam * 0.3;
    float finalFinal_exam = finalExam * 0.5;
    float finalScore = finalAssignment_score + finalMid_exam + finalFinal_exam;
    
    printf("Final scoremu adalah: %.2f", finalScore);

return 0;
}