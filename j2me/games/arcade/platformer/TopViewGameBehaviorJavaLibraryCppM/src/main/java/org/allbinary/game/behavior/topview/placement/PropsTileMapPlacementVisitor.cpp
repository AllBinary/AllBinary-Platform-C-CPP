
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
        



            #include <vector>
        
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/mapeditor/core/TileLayer.h>

      
#include <org/mapeditor/core/TiledMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TileMapPlacementVisitor.h"

class PropsTileMapPlacementVisitor: public TileMapPlacementVisitor {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const MyRandomFactory randomFactory = MyRandomFactory::getInstance();

    public: void visit(TiledMap lastMap, std::vector<std::vector<int32_t>> mapData){

    int32_t layerIndex = 0;;
    

    TileLayer tileLayer = (lastMap.getLayer(layerIndex) as TileLayer);;
    

    std::vector<std::vector<int32_t>> mapArray = tileLayer.getMapArray();;
    

    int32_t size = mapData.size();;
    

    int32_t size2 = mapData[0]!.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {




                        for (
    int32_t index2 = 0;index2 < size2; index2++)
        {

                        if(mapArray[index]![index2] == 14)
                        
                                    {
                                    
                                    }
                                
                        else {
                            this->visit2(mapArray, mapData, index, index2);
    

                        }
                            

                        if(index % 7 == 0)
                        
                                    {
                                    
                        if(mapArray[index]![index2] == 19)
                        
                                    {
                                    
    int32_t randomInt = this->randomFactory.getAbsoluteNextIntAllowZero(3);;
    

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
                                    
    int32_t randomInt = randomFactory.getAbsoluteNextIntAllowZero(3);;
    

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
                                    
    int32_t randomInt = this->randomFactory.getAbsoluteNextIntAllowZero(4);;
    

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


    public: void visit2(std::vector<std::vector<int32_t>> mapArray, std::vector<std::vector<int32_t>> mapData, int32_t index, int32_t index2){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

    int32_t countX = 0;;
    

    int32_t countY = 0;;
    

    int32_t index3 = index -1;;
    




                        for (
    int32_t index4 = index2 -1;index4 > 0; index4--)
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
    int32_t index5 = index3 +1;index5 < index -1; index5++)
        {




                        for (
    int32_t index6 = index4 +1;index6 < index2 -1; index6++)
        {

                        if(mapArray[index5]![index6] != 14 || mapData[index5]![index6] != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
}

}


    int32_t x = index -(countX /2);;
    

    int32_t y = index2 -(countY /2);;
    

                        if(x >= 0 && y >= 0 && x < mapData.size() && y < mapData[0]!.size())
                        
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

            

