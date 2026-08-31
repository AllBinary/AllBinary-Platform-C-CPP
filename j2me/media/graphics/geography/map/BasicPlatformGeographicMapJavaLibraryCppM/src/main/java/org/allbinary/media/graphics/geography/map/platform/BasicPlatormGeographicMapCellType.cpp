
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
        

    public static BasicPlatormGeographicMapCellType createType(int32_t type){

    types: BasicArrayList = new BasicArrayListS(1);;
    
types.add(SmallIntegerSingletonFactory.getInstance()!.getAt(type));
    

    basicPlatormGeographicMapCellType: BasicPlatormGeographicMapCellType = new BasicPlatormGeographicMapCellType(types);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basicPlatormGeographicMapCellType;
    
}


    private: const types: std::vector<int32_t>;

public constructor (BasicArrayList types){

            super();
        
    size: int32_t = types.size()!;;
    

    typeArray: std::vector<int32_t> = new Array(size);;
    

    typeAsInteger: Integer;;
    

    type: int32_t= 0;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
typeAsInteger= (types.get(index) as Integer);
    
type= typeAsInteger!.intValue();
    
new GeographicMapCellType(type, 0);
    
typeArray[index]= type;
    
}

this.types= typeArray;
    
}


    public bool isType(GeographicMapCellType type){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hasType(type.getType());;
    
}


    public bool hasType(int32_t type){

    size: int32_t = types.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

                        if(this.types[index] == type)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

