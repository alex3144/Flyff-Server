// number 삽입 이미지 개수
// serialize 연속으로 이미지 삽입(num width hight StartPosition-X StartPosition-Y, center_x, center_y)
// pos 단일로 이미지 삽입 (width hight StartPosition-X StartPosition-Y)
// MULTI_LANGUAGE은 국가별 폴더에서 texture파일을 찾는 옵션...
// 상대경로로 넣어야한다!!!!

// RainbowRace NPC 표시
// 맵 번호, 전체맵 좌표 X, 전체맵 좌표 Y, 단일맵 좌표 X, 단일맵 좌표Y
// 맵 번호 0(전체 맵), 1(다콘 제 1,2 지구), 2(다콘 제 3 지구), 3(리시스의 정원), 4(세인트 모닝), 5(플라리스) 
number 7
texture "TexMapRainbow_NPC.bmp" 0xffff00ff
serialize 7 40 40  0   0 0 0
3 1003 453 780 217	// Red NPC
4 875 750 477 830	// Orange NPC
5 759 507 560 380	// Yellow NPC
1 645 529 985 483	// Green NPC
1 585 540 837 510	// Blue NPC
2 292 432 495  95	// Indigo NPC
2 312 636 546 620	// Violet NPC