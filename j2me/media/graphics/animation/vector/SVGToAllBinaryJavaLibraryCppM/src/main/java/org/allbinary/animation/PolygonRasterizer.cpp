
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PathParser.h"
#include "FixedPoint.h"

class PolygonRasterizer
            : public Object
         {
        

    private: static const instance: PolygonRasterizer = new PolygonRasterizer();

    public static PolygonRasterizer getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return instance;
    
}


    public std::vector<int32_t> getPixelBuffer(string svgPath, std::vector<int32_t> pathX, std::vector<int32_t> pathY, std::vector<int32_t> pixelBuffer, int32_t width, int32_t height){

    pointCount: int32_t = PathParser.parsePath(svgPath, pathX, pathY, pathX!.length)!;;
    




                        for (
    i: int32_t = 0;i < pixelBuffer!.length; i++)
        {
pixelBuffer[i]= 0xFFFFFFFF;
    
}

PolygonRasterizer.getInstance()!.fillPolygon(pathX, pathY, pointCount, pixelBuffer, width, height, 0xFFFF00FF);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pixelBuffer;
    
}


    public fillPolygon(std::vector<int32_t> polyX, std::vector<int32_t> polyY, int32_t numPoints, std::vector<int32_t> buffer, int32_t width, int32_t height, int32_t colorRGB){

                        if(numPoints < 3)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

    fixedPoint: FixedPoint = FixedPoint.getInstance()!;;
    

    x: std::vector<int32_t> = new Array(numPoints);;
    

    y: std::vector<int32_t> = new Array(numPoints);;
    

    minY: int32_t = height;maxY: int32_t = 0;;
    




                        for (
    i: int32_t = 0;i < numPoints; i++)
        {
x[i]= fixedPoint!.toInt(polyX[i]!);
    
y[i]= fixedPoint!.toInt(polyY[i]!);
    

                        if(y[i] < minY)
                        minY= y[i]!

                        if(y[i] > maxY)
                        maxY= y[i]!
}


                        if(minY < 0)
                        minY= 0

                        if(maxY >= height)
                        maxY= height -1

    scanlineX: std::vector<int32_t> = new Array(numPoints);;
    




                        for (
    scanY: int32_t = minY;scanY <= maxY; scanY++)
        {

    intersectCount: int32_t = 0;;
    




                        for (
    i: int32_t = 0;i < numPoints; i++)
        {

    next: int32_t = (i +1) % numPoints;;
    

    x1: int32_t = x[i]!;y1: int32_t = y[i]!;;
    

    x2: int32_t = x[next]!;y2: int32_t = y[next]!;;
    

                        if((y1 < scanY && y2 >= scanY) || (y2 < scanY && y1 >= scanY))
                        
                                    {
                                    
                        if(y2 != y1)
                        
                                    {
                                    
    interX: int32_t = x1 +(scanY -y1) *(x2 -x1) /(y2 -y1);;
    
scanlineX[intersectCount++]= interX;
    

                                    }
                                

                                    }
                                
}





                        for (
    i: int32_t = 0;i < intersectCount -1; i++)
        {




                        for (
    j: int32_t = i +1;j < intersectCount; j++)
        {

                        if(scanlineX[i] > scanlineX[j])
                        
                                    {
                                    
    temp: int32_t = scanlineX[i]!;;
    
scanlineX[i]= scanlineX[j]!;
    
scanlineX[j]= temp;
    

                                    }
                                
}

}





                        for (
    i: int32_t = 0;i < intersectCount; )
        {

                        if(i +1 >= intersectCount)
                        
                                    //Otherwise - thenStmt - BreakStmt


    startX: int32_t = scanlineX[i]!;;
    

    endX: int32_t = scanlineX[i +1]!;;
    

                        if(startX < 0)
                        startX= 0

                        if(endX >= width)
                        endX= width -1

    rowOffset: int32_t = scanY *width;;
    




                        for (
    pixelX: int32_t = startX;pixelX <= endX; pixelX++)
        {
buffer[rowOffset +pixelX]= colorRGB;
    
}

}

}

}


    public main(std::vector<string> args){

    width: int32_t = 100;;
    

    height: int32_t = 100;;
    

    pathX: std::vector<int32_t> = new Array(200);;
    

    pathY: std::vector<int32_t> = new Array(200);;
    

    pixelBuffer: std::vector<int32_t> = new Array(width *height);;
    

    svgPath: string = "M 32.139812,81.554575 14.450128,74.294372 V 50.000034 25.705697 l 17.73231,-7.268329 C 41.935209,14.439788 49.953112,11.168898 50,11.168723 c 0.04689,-1.74e-4 8.064791,3.270238 17.817562,7.267583 l 17.73231,7.267899 V 50 74.295795 l -17.73231,7.2679 c -9.752771,3.997344 -17.789855,7.264116 -17.860188,7.259492 -0.07033,-0.0046 -8.088235,-3.275499 -17.817562,-7.268612 z";;
    
PolygonRasterizer.getInstance()!.getPixelBuffer(svgPath, pathX, pathY, pixelBuffer, width, height);
    
}


};

            

