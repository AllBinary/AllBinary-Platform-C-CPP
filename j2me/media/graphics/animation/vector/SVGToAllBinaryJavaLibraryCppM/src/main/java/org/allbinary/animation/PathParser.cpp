
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Double.h"
        
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StringBuffer.h"
#include "FixedPoint.h"
#include "PGUtil.h"

class PathParser
            : public Object
         {
        

    static std::vector<string> tokenize(string d){

    tokens: Vector = new Vector();;
    

    sb: StringBuffer = new StringBuffer();;
    




                        for (
    i: int32_t = 0;i < d.length; i++)
        {

    c: char = d[i]!;;
    

                        if(c == ' ' || c == ',' || c == '\t' || c == '\n' || c == '\r')
                        
                                    {
                                    
                        if(sb.length() > 0)
                        
                                    {
                                    tokens.addElement(sb.toString());
    
sb.setLength(0);
    

                                    }
                                

                                    }
                                
                             else 
                        if(c == 'M' || c == 'm' || c == 'L' || c == 'l' || c == 'V' || c == 'v' || c == 'C' || c == 'c' || c == 'Z' || c == 'z')
                        
                                    {
                                    
                        if(sb.length() > 0)
                        
                                    {
                                    tokens.addElement(sb.toString());
    
sb.setLength(0);
    

                                    }
                                
tokens.addElement(c.slice(, ).join(''));
    

                                    }
                                
                        else {
                            sb.append(c);
    

                        }
                            
}


                        if(sb.length() > 0)
                        tokens.addElement(sb.toString())

    res: std::vector<string> = new Array(tokens.length);;
    
tokens.copyInto(res);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return res;
    
}


    public static int32_t parsePath(string d, std::vector<int32_t> outX, std::vector<int32_t> outY, int32_t maxPoints){

    tokens: std::vector<string> = tokenize(d)!;;
    

    count: std::vector<int32_t> = [0];;
    

    fixedPoint: FixedPoint = FixedPoint.getInstance()!;;
    

    curX: int32_t = 0;curY: int32_t = 0;;
    

    startX: int32_t = 0;startY: int32_t = 0;;
    

    idx: int32_t = 0;;
    

        while(idx < tokens.length)
        {

    tok: string = tokens[idx++]!;;
    

    cmd: char = tok[0]!;;
    

                        if(cmd == 'M' || cmd == 'm')
                        
                                    {
                                    
    x: int32_t = fixedPoint!.toFixed(Double.parseDouble(tokens[idx++]!))!;;
    

    y: int32_t = fixedPoint!.toFixed(Double.parseDouble(tokens[idx++]!))!;;
    

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
                                    
    x: int32_t = fixedPoint!.toFixed(Double.parseDouble(tokens[idx++]!))!;;
    

    y: int32_t = fixedPoint!.toFixed(Double.parseDouble(tokens[idx++]!))!;;
    

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
                                    
    y: int32_t = fixedPoint!.toFixed(Double.parseDouble(tokens[idx++]!))!;;
    

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
                                    
    x1: int32_t = fixedPoint!.toFixed(Double.parseDouble(tokens[idx++]!))!;;
    

    y1: int32_t = fixedPoint!.toFixed(Double.parseDouble(tokens[idx++]!))!;;
    

    x2: int32_t = fixedPoint!.toFixed(Double.parseDouble(tokens[idx++]!))!;;
    

    y2: int32_t = fixedPoint!.toFixed(Double.parseDouble(tokens[idx++]!))!;;
    

    x3: int32_t = fixedPoint!.toFixed(Double.parseDouble(tokens[idx++]!))!;;
    

    y3: int32_t = fixedPoint!.toFixed(Double.parseDouble(tokens[idx++]!))!;;
    

                        if(cmd == 'c')
                        
                                    {
                                    x1 += curX;
    
y1 += curY;
    
x2 += curX;
    
y2 += curY;
    
x3 += curX;
    
y3 += curY;
    

                                    }
                                
PGUtil.getInstance()!.flattenCubicBezier(curX, curY, x1, y1, x2, y2, x3, y3, outX, outY, count, maxPoints);
    
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
                                

        while(idx < tokens.length && !isCommand(tokens[idx]!))
        {

                        if(cmd == 'M' || cmd == 'm' || cmd == 'L' || cmd == 'l')
                        
                                    {
                                    
    x: int32_t = fixedPoint!.toFixed(Double.parseDouble(tokens[idx++]!))!;;
    

    y: int32_t = fixedPoint!.toFixed(Double.parseDouble(tokens[idx++]!))!;;
    

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
                                    
    y: int32_t = fixedPoint!.toFixed(Double.parseDouble(tokens[idx++]!))!;;
    

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
                        return count[0]!;
    
}


    static bool isCommand(string tok){

    c: char = tok[0]!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "MmLlVvCcZz".indexOf(c) >= 0;
    
}


};

            

