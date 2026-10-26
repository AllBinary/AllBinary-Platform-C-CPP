
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PathFindingNode
            : public Object
         {

    public: Object* parent = NullUtil::getInstance().NULL_OBJECT;

    public: GeographicMapCellPosition geographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

public: PathFindingNode(Object* parent, GeographicMapCellPosition geographicMapCellPosition){
this->parent= parent;
    
this->setGeographicMapCellPositionP(geographicMapCellPosition);
    

                        if(this->geographicMapCellPosition == SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    


                            throw Exception("No GeographicMapCellPosition");
                    

                                    }
                                
}


    public: PathFindingNode getParentP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->parent;
    
}


    public: void setGeographicMapCellPositionP(GeographicMapCellPosition geographicMapCellPosition){
this->geographicMapCellPosition= geographicMapCellPosition;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->constructor.name.toString());
    
stringBuffer.append(CommonLabels::getInstance().COLON_SEP);
    
stringBuffer.append(" Path: ");
    
stringBuffer.append(this->geographicMapCellPosition.toString());
    

    PathFindingNode pathFindingNode = this->getParentP();;
    

        while(pathFindingNode != 
                                    nullptr
                                )
        {
stringBuffer.append(pathFindingNode.geographicMapCellPosition.toString());
    
stringBuffer.append(CommonSeps::getInstance().SPACE);
    
pathFindingNode= pathFindingNode.getParentP();
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

