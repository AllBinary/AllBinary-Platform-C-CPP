
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
        



            #include <vector>
        
            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicPlatormGeographicMapCellType
            : public Object
         {

    public: static BasicPlatormGeographicMapCellType createType(int32_t type){

    BasicArrayList types = BasicArrayListS(1);;
    
types.add(SmallIntegerSingletonFactory::getInstance().getAt(type));
    

    BasicPlatormGeographicMapCellType basicPlatormGeographicMapCellType = BasicPlatormGeographicMapCellType(types);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basicPlatormGeographicMapCellType;
    
}


    private: std::vector<int32_t> types;

public: BasicPlatormGeographicMapCellType(BasicArrayList types){

    int32_t size = types.size();;
    

    std::vector<int32_t> typeArray = new Array(size);;
    

    Integer typeAsInteger;;
    

    int32_t type= 0;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
typeAsInteger= (types.get(index) as Integer);
    
type= typeAsInteger.intValue();
    
GeographicMapCellType(type, 0);
    
typeArray[index]= type;
    
}

this->types= typeArray;
    
}


    public: bool isType(GeographicMapCellType type){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hasType(type.getType());;
    
}


    public: bool hasType(int32_t type){

    int32_t size = types.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(this->types[index] == type)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

