
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Double.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StringBuffer.h"
#include "FixedPoint.h"
#include "PGUtil.h"

class PathParser
            : public Object
         {

    private: static std::vector<std::string> tokenize(std::string d){

    BasicArrayList tokens = BasicArrayListD();;
    

    StringBuffer sb = StringBuffer();;
    




                        for (
    int32_t i = 0;i < d.size(); i++)
        {

    char c = d[i];;
    

                        if(c == ' ' || c == ',' || c == '\t' || c == '\n' || c == '\r')
                        
                                    {
                                    
                        if(sb.length() > 0)
                        
                                    {
                                    tokens.add(sb.toString());
    
sb.setLength(0);
    

                                    }
                                

                                    }
                                
                             else 
                        if(c == 'M' || c == 'm' || c == 'L' || c == 'l' || c == 'V' || c == 'v' || c == 'C' || c == 'c' || c == 'Z' || c == 'z')
                        
                                    {
                                    
                        if(sb.length() > 0)
                        
                                    {
                                    tokens.add(sb.toString());
    
sb.setLength(0);
    

                                    }
                                
tokens.add(c.slice(, ).join(''));
    

                                    }
                                
                        else {
                            sb.append(c);
    

                        }
                            
}


                        if(sb.length() > 0)
                        tokens.add(sb.toString());
                                

    std::vector<std::string> res = std::vector<std::string>(tokens.size());;
    
tokens.toArrayType(res);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return res;
    
}


    public: static int32_t parsePath(std::string d, std::vector<int32_t> outX, std::vector<int32_t> outY, int32_t maxPoints){

    std::vector<std::string> tokens = tokenize(d);;
    

    std::vector<int32_t> count = {0};;
    

    FixedPoint fixedPoint = FixedPoint::getInstance();;
    

    int32_t curX = 0;int32_t curY = 0;;
    

    int32_t startX = 0;int32_t startY = 0;;
    

    int32_t idx = 0;;
    

        while(idx < tokens.size())
        {

    std::string tok = tokens[idx++];;
    

    char cmd = tok[0];;
    

                        if(cmd == 'M' || cmd == 'm')
                        
                                    {
                                    
    int32_t x = fixedPoint.toFixed(Double::parseDouble(tokens[idx++]));;
    

    int32_t y = fixedPoint.toFixed(Double::parseDouble(tokens[idx++]));;
    

                        if(cmd == 'm')
                        
                                    {
                                    x += curX;
    
y += curY;
    

                                    }
                                
curX= x;
    
curY= y;
    
startX= x;
    
startY= y;
    
outX[count[0]]= curX;
    
outY[count[0]]= curY;
    
count[0]++;
    

                                    }
                                
                             else 
                        if(cmd == 'L' || cmd == 'l')
                        
                                    {
                                    
    int32_t x = fixedPoint.toFixed(Double::parseDouble(tokens[idx++]));;
    

    int32_t y = fixedPoint.toFixed(Double::parseDouble(tokens[idx++]));;
    

                        if(cmd == 'l')
                        
                                    {
                                    x += curX;
    
y += curY;
    

                                    }
                                
curX= x;
    
curY= y;
    
outX[count[0]]= curX;
    
outY[count[0]]= curY;
    
count[0]++;
    

                                    }
                                
                             else 
                        if(cmd == 'V' || cmd == 'v')
                        
                                    {
                                    
    int32_t y = fixedPoint.toFixed(Double::parseDouble(tokens[idx++]));;
    

                        if(cmd == 'v')
                        
                                    {
                                    y += curY;
    

                                    }
                                
curY= y;
    
outX[count[0]]= curX;
    
outY[count[0]]= curY;
    
count[0]++;
    

                                    }
                                
                             else 
                        if(cmd == 'C' || cmd == 'c')
                        
                                    {
                                    
    int32_t x1 = fixedPoint.toFixed(Double::parseDouble(tokens[idx++]));;
    

    int32_t y1 = fixedPoint.toFixed(Double::parseDouble(tokens[idx++]));;
    

    int32_t x2 = fixedPoint.toFixed(Double::parseDouble(tokens[idx++]));;
    

    int32_t y2 = fixedPoint.toFixed(Double::parseDouble(tokens[idx++]));;
    

    int32_t x3 = fixedPoint.toFixed(Double::parseDouble(tokens[idx++]));;
    

    int32_t y3 = fixedPoint.toFixed(Double::parseDouble(tokens[idx++]));;
    

                        if(cmd == 'c')
                        
                                    {
                                    x1 += curX;
    
y1 += curY;
    
x2 += curX;
    
y2 += curY;
    
x3 += curX;
    
y3 += curY;
    

                                    }
                                
PGUtil::getInstance().flattenCubicBezier(curX, curY, x1, y1, x2, y2, x3, y3, outX, outY, count, maxPoints);
    
curX= x3;
    
curY= y3;
    

                                    }
                                
                             else 
                        if(cmd == 'Z' || cmd == 'z')
                        
                                    {
                                    curX= startX;
    
curY= startY;
    
outX[count[0]]= curX;
    
outY[count[0]]= curY;
    
count[0]++;
    

                                    }
                                

        while(idx < tokens.size() && !isCommand(tokens[idx]))
        {

                        if(cmd == 'M' || cmd == 'm' || cmd == 'L' || cmd == 'l')
                        
                                    {
                                    
    int32_t x = fixedPoint.toFixed(Double::parseDouble(tokens[idx++]));;
    

    int32_t y = fixedPoint.toFixed(Double::parseDouble(tokens[idx++]));;
    

                        if(cmd == 'm' || cmd == 'l')
                        
                                    {
                                    x += curX;
    
y += curY;
    

                                    }
                                
curX= x;
    
curY= y;
    
outX[count[0]]= curX;
    
outY[count[0]]= curY;
    
count[0]++;
    

                                    }
                                
                             else 
                        if(cmd == 'V' || cmd == 'v')
                        
                                    {
                                    
    int32_t y = fixedPoint.toFixed(Double::parseDouble(tokens[idx++]));;
    

                        if(cmd == 'v')
                        
                                    {
                                    y += curY;
    

                                    }
                                
curY= y;
    
outX[count[0]]= curX;
    
outY[count[0]]= curY;
    
count[0]++;
    

                                    }
                                
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return count[0];
    
}


    private: static bool isCommand(std::string tok){

    char c = tok[0];;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "MmLlVvCcZz".indexOf(c) >= 0;
    
}


};

            

