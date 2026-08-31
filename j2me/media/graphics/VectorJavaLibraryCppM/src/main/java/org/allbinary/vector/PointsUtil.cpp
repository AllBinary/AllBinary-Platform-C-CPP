
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PointsUtil
            : public Object
         {
        

    private: static const instance: PointsUtil = new PointsUtil();

    public static PointsUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointsUtil.instance;
    
}


    public std::vector<std::vector<std::vector<int32_t>>> adjustXY(std::vector<std::vector<std::vector<int32_t>>> points, int32_t x, int32_t y){

    size: int32_t = points.length
                ;;
    

    newPoints: std::vector<std::vector<std::vector<int32_t>>> = Array.from({ length: size }, () => Array.from({ length: 0 }, () => new Array(0).fill(0)));;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    size2: int32_t = points[index]!.length
                ;;
    
newPoints[index]= new Array(size2).fill(null).map(() => new Array(2).fill(0));
    




                        for (
    index2: int32_t = 0;index2 < size2; index2++)
        {

                        if(points[index]![index2]![0] != 1000)
                        
                                    {
                                    newPoints[index]![index2]![0]= points[index]![index2]![0] +x;
    
newPoints[index]![index2]![1]= points[index]![index2]![1] +y;
    

                                    }
                                
                        else {
                            newPoints[index]![index2]![0]= 1000;
    
newPoints[index]![index2]![1]= 1000;
    

                        }
                            
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newPoints;
    
}


    public std::vector<std::vector<int32_t>> adjust(std::vector<std::vector<int32_t>> points, int32_t both){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.adjust(points, both, both);;
    
}


    public std::vector<std::vector<int32_t>> adjust(std::vector<std::vector<int32_t>> points, int32_t x, int32_t y){

    newPoints: std::vector<std::vector<int32_t>> = new Array(points.length).fill(null).map(() => new Array(2).fill(0));;
    




                        for (
    index2: int32_t = 0;index2 < points.length; index2++)
        {

                        if(points[index2]![0] != 1000)
                        
                                    {
                                    newPoints[index2]![0]= points[index2]![0] +x;
    
newPoints[index2]![1]= points[index2]![1] +y;
    

                                    }
                                
                        else {
                            newPoints[index2]![0]= 1000;
    
newPoints[index2]![1]= 1000;
    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newPoints;
    
}


};

            

