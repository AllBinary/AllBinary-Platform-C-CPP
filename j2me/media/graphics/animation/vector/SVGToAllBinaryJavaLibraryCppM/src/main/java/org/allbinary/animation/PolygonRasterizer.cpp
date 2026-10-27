
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/PathParser.h"
#include "org/allbinary/animation/FixedPoint.h"

class PolygonRasterizer
            : public Object
         {

    private: static PolygonRasterizer* instance() { static std::unique_ptr<PolygonRasterizer> value(new PolygonRasterizer()); return value.get(); }

    public: static PolygonRasterizer* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PolygonRasterizer::instance();
    
}


    public: std::vector<int32_t> getPixelBuffer(std::string svgPath, std::vector<int32_t> pathX, std::vector<int32_t> pathY, std::vector<int32_t> pixelBuffer, int32_t width, int32_t height){

    int32_t pointCount = PathParser::parsePath(svgPath, pathX, pathY, pathX.size());;
    




                        for (
    int32_t i = 0;i < pixelBuffer.size(); i++)
        {
pixelBuffer[i]= 0xFFFFFFFF;
    
}

PolygonRasterizer::getInstance()->fillPolygon(pathX, pathY, pointCount, pixelBuffer, width, height, 0xFFFF00FF);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pixelBuffer;
    
}


    public: void fillPolygon(std::vector<int32_t> polyX, std::vector<int32_t> polyY, int32_t numPoints, std::vector<int32_t> buffer, int32_t width, int32_t height, int32_t colorRGB){

                        if(numPoints < 3)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

    FixedPoint* fixedPoint = FixedPoint::getInstance();;
    

    std::vector<int32_t> x = std::vector<int32_t>(numPoints);;
    

    std::vector<int32_t> y = std::vector<int32_t>(numPoints);;
    

    int32_t minY = height;int32_t maxY = 0;;
    




                        for (
    int32_t i = 0;i < numPoints; i++)
        {
x[i]= fixedPoint->toInt(polyX[i]);
    
y[i]= fixedPoint->toInt(polyY[i]);
    

                        if(y[i] < minY)
                        minY= y[i];
                                

                        if(y[i] > maxY)
                        maxY= y[i];
                                
}


                        if(minY < 0)
                        minY= 0;
                                

                        if(maxY >= height)
                        maxY= height -1;
                                

    std::vector<int32_t> scanlineX = std::vector<int32_t>(numPoints);;
    




                        for (
    int32_t scanY = minY;scanY <= maxY; scanY++)
        {

    int32_t intersectCount = 0;;
    




                        for (
    int32_t i = 0;i < numPoints; i++)
        {

    int32_t next = (i +1) % numPoints;;
    

    int32_t x1 = x[i];int32_t y1 = y[i];;
    

    int32_t x2 = x[next];int32_t y2 = y[next];;
    

                        if((y1 < scanY && y2 >= scanY) || (y2 < scanY && y1 >= scanY))
                        
                                    {
                                    
                        if(y2 != y1)
                        
                                    {
                                    
    int32_t interX = x1 +(scanY -y1) *(x2 -x1) /(y2 -y1);;
    
scanlineX[intersectCount++]= interX;
    

                                    }
                                

                                    }
                                
}





                        for (
    int32_t i = 0;i < intersectCount -1; i++)
        {




                        for (
    int32_t j = i +1;j < intersectCount; j++)
        {

                        if(scanlineX[i] > scanlineX[j])
                        
                                    {
                                    
    int32_t temp = scanlineX[i];;
    
scanlineX[i]= scanlineX[j];
    
scanlineX[j]= temp;
    

                                    }
                                
}

}





                        for (
    int32_t i = 0;i < intersectCount; )
        {

                        if(i +1 >= intersectCount)
                        
                                    //Otherwise - thenStmt - BreakStmt


    int32_t startX = scanlineX[i];;
    

    int32_t endX = scanlineX[i +1];;
    

                        if(startX < 0)
                        startX= 0;
                                

                        if(endX >= width)
                        endX= width -1;
                                

    int32_t rowOffset = scanY *width;;
    




                        for (
    int32_t pixelX = startX;pixelX <= endX; pixelX++)
        {
buffer[rowOffset +pixelX]= colorRGB;
    
}

}

}

}


    public: void main(std::vector<std::string> args){

    int32_t width = 100;;
    

    int32_t height = 100;;
    

    std::vector<int32_t> pathX = std::vector<int32_t>(200);;
    

    std::vector<int32_t> pathY = std::vector<int32_t>(200);;
    

    std::vector<int32_t> pixelBuffer = std::vector<int32_t>(width *height);;
    

    std::string svgPath = "M 32.139812,81.554575 14.450128,74.294372 V 50.000034 25.705697 l 17.73231,-7.268329 C 41.935209,14.439788 49.953112,11.168898 50,11.168723 c 0.04689,-1.74e-4 8.064791,3.270238 17.817562,7.267583 l 17.73231,7.267899 V 50 74.295795 l -17.73231,7.2679 c -9.752771,3.997344 -17.789855,7.264116 -17.860188,7.259492 -0.07033,-0.0046 -8.088235,-3.275499 -17.817562,-7.268612 z";;
    
PolygonRasterizer::getInstance()->getPixelBuffer(svgPath, pathX, pathY, pixelBuffer, width, height);
    
}


};

            

