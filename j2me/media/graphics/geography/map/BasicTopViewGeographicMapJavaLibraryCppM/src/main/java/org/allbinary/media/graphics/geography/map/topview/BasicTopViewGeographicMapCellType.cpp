
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
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicTopViewGeographicMapCellType
            : public Object
         {
        

    public static BasicTopViewGeographicMapCellType createType(string name, int32_t type, int32_t cost){

    types: BasicArrayList = new BasicArrayListS(1);;
    
types.add(type);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicTopViewGeographicMapCellType(name, types, cost);
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const name: string;

    public const cost: int32_t;

    private: const types: std::vector<int32_t>;

public constructor (string name, BasicArrayList types, int32_t cost){

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
    

                        if(GeographicMapCellTypeFactory.getInstance()!.getGeographicMapCellTypeArray()[type] == 
                                    null
                                )
                        
                                    {
                                    new RaceTrackGeographicMapCellType(name, type, cost, 0);
    

                                    }
                                
                        else {
                            
                        }
                            
typeArray[index]= type;
    
}

this.name= name;
    
this.cost= cost;
    
this.types= typeArray;
    
}


    public bool isType(GeographicMapCellType type){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hasType(type.getType());;
    
}


    public bool hasType(int32_t type){

    size: int32_t = this.types.length
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


    public std::vector<int32_t> getTypes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.types;
    
}


    public string toString(){

    stringMaker: StringMaker = new StringMaker();;
    

    size: int32_t = this.types.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
stringMaker!.appendint(this.types[index]!)!.append(CommonSeps.getInstance()!.COMMA);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringMaker!.toString();;
    
}


};

            

