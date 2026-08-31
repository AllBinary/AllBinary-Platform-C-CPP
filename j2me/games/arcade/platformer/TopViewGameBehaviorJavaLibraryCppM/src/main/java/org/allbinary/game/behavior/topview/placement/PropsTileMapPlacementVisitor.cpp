
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/mapeditor/core/TileLayer.h>

      
#include <org/mapeditor/core/TiledMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TileMapPlacementVisitor.h"

class PropsTileMapPlacementVisitor: public TileMapPlacementVisitor {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const randomFactory: MyRandomFactory = MyRandomFactory.getInstance()!;

    public visit(TiledMap lastMap, std::vector<std::vector<int32_t>> mapData){

    layerIndex: int32_t = 0;;
    

    tileLayer: TileLayer = (lastMap!.getLayer(layerIndex) as TileLayer);;
    

    mapArray: std::vector<std::vector<int32_t>> = tileLayer!.getMapArray()!;;
    

    size: int32_t = mapData!.length
                ;;
    

    size2: int32_t = mapData[0]!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {




                        for (
    index2: int32_t = 0;index2 < size2; index2++)
        {

                        if(mapArray[index]![index2] == 14)
                        
                                    {
                                    
                                    }
                                
                        else {
                            this.visit2(mapArray, mapData, index, index2);
    

                        }
                            

                        if(index % 7 == 0)
                        
                                    {
                                    
                        if(mapArray[index]![index2] == 19)
                        
                                    {
                                    
    randomInt: int32_t = this.randomFactory!.getAbsoluteNextIntAllowZero(3)!;;
    

                        if(randomInt == 0)
                        
                                    {
                                    mapData[index]![index2]= 1;
    

                                    }
                                
                             else 
                        if(randomInt == 1)
                        
                                    {
                                    mapData[index]![index2]= 81;
    

                                    }
                                
                             else 
                        if(randomInt == 2)
                        
                                    {
                                    mapData[index]![index2]= 97;
    

                                    }
                                

                                    }
                                
                             else 
                        if(mapArray[index]![index2] == 17)
                        
                                    {
                                    
    randomInt: int32_t = randomFactory!.getAbsoluteNextIntAllowZero(3)!;;
    

                        if(randomInt == 0)
                        
                                    {
                                    mapData[index]![index2]= 17;
    

                                    }
                                
                             else 
                        if(randomInt == 1)
                        
                                    {
                                    mapData[index]![index2]= 81;
    

                                    }
                                
                             else 
                        if(randomInt == 2)
                        
                                    {
                                    mapData[index]![index2]= 97;
    

                                    }
                                

                                    }
                                

                                    }
                                

                        if(index2 % 7 == 0)
                        
                                    {
                                    
                        if(mapArray[index]![index2] == 34)
                        
                                    {
                                    
    randomInt: int32_t = this.randomFactory!.getAbsoluteNextIntAllowZero(4)!;;
    

                        if(randomInt == 0)
                        
                                    {
                                    mapData[index]![index2]= 33;
    

                                    }
                                
                             else 
                        if(randomInt == 1)
                        
                                    {
                                    mapData[index]![index2]= 65;
    

                                    }
                                
                             else 
                        if(randomInt == 2)
                        
                                    {
                                    mapData[index]![index2]= 81;
    

                                    }
                                
                             else 
                        if(randomInt == 3)
                        
                                    {
                                    mapData[index]![index2]= 97;
    

                                    }
                                

                                    }
                                

                                    }
                                
}

}

}


    public visit2(std::vector<std::vector<int32_t>> mapArray, std::vector<std::vector<int32_t>> mapData, int32_t index, int32_t index2){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    countX: int32_t = 0;;
    

    countY: int32_t = 0;;
    

    index3: int32_t = index -1;;
    




                        for (
    index4: int32_t = index2 -1;index4 > 0; index4--)
        {
index3--;
    

                        if(index3 < 0 || index4 < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(mapArray[index3]![index4] != 14 || mapData[index3]![index4] != 0)
                        
                                    {
                                    
                        if(countX > 10 && countY > 10)
                        
                                    {
                                    



                        for (
    index5: int32_t = index3 +1;index5 < index -1; index5++)
        {




                        for (
    index6: int32_t = index4 +1;index6 < index2 -1; index6++)
        {

                        if(mapArray[index5]![index6] != 14 || mapData[index5]![index6] != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
}

}


    x: int32_t = index -(countX /2);;
    

    y: int32_t = index2 -(countY /2);;
    

                        if(x >= 0 && y >= 0 && x < mapData!.length && y < mapData[0]!.length)
                        
                                    {
                                    
                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
countY++;
    
countX++;
    
}

}


};

            

