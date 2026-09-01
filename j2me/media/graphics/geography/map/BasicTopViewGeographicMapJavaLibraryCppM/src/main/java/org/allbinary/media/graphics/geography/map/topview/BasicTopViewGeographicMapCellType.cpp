
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

    public: static BasicTopViewGeographicMapCellType createType(std::string name, int32_t type, int32_t cost){

    BasicArrayList types = BasicArrayListS(1);;
    
types.add(type);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicTopViewGeographicMapCellType(name, types, cost);
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: std::string name;

    public: int32_t cost;

    private: std::vector<int32_t> types;

public: BasicTopViewGeographicMapCellType(std::string name, BasicArrayList types, int32_t cost){

    int32_t size = types.size();;
    

    std::vector<int32_t> typeArray = new Array(size);;
    

    Integer typeAsInteger;;
    

    int32_t type= 0;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
typeAsInteger= (types.get(index) as Integer);
    
type= typeAsInteger.intValue();
    

                        if(GeographicMapCellTypeFactory::getInstance().getGeographicMapCellTypeArray()[type] == 
                                    nullptr
                                )
                        
                                    {
                                    RaceTrackGeographicMapCellType(name, type, cost, 0);
    

                                    }
                                
                        else {
                            
                        }
                            
typeArray[index]= type;
    
}

this->name= name;
    
this->cost= cost;
    
this->types= typeArray;
    
}


    public: bool isType(GeographicMapCellType type){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hasType(type.getType());;
    
}


    public: bool hasType(int32_t type){

    int32_t size = this->types.size();;
    




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


    public: std::vector<int32_t> getTypes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->types;
    
}


    public: std::string toString(){

    StringMaker stringMaker = StringMaker();;
    

    int32_t size = this->types.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
stringMaker.appendint(this->types[index]!).append(CommonSeps::getInstance().COMMA);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringMaker.toString();;
    
}


};

            

