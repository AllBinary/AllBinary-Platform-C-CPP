
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODE_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PathFindingNode::PathFindingNode(Object* parent, GeographicMapCellPosition* geographicMapCellPosition) : parent(NullUtil::getInstance()->NULL_OBJECT), geographicMapCellPosition(SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION){
this->parent= parent;
    
this->setGeographicMapCellPositionP(geographicMapCellPosition);
    

                        if(this->geographicMapCellPosition == SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    


                            throw Exception("No GeographicMapCellPosition");
                    

                                    }
                                
}


    auto PathFindingNode::getParentP() -> PathFindingNode*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<PathFindingNode*>(this->parent);
    
}


    auto PathFindingNode::setGeographicMapCellPositionP(GeographicMapCellPosition* geographicMapCellPosition) -> void{
this->geographicMapCellPosition= geographicMapCellPosition;
    
}


    auto PathFindingNode::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getClass()->getName());
    
stringBuffer->append(CommonLabels::getInstance()->COLON_SEP);
    
stringBuffer->append(" Path: ");
    
stringBuffer->append(JavaString::valueOf(this->geographicMapCellPosition));
    

    PathFindingNode* pathFindingNode = this->getParentP();;
    

        while(pathFindingNode != 
                                    nullptr
                                )
        {
stringBuffer->append(JavaString::valueOf(pathFindingNode->geographicMapCellPosition));
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
pathFindingNode= pathFindingNode->getParentP();
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODE_CPP
