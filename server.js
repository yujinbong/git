//클래스 표현은 익명 클래스와 기명 클래스 둘다 만들 수 있다.
//unnamed
var Polygon = class {
    constructor(height, width){
        this.height=height;
        this.width=width;
    }
};

//name
var Polygon2=class Polygon2{
    constructor(height,width) {
        this.height = height;
        this.width = width;
    }
};