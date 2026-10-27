
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPDIRECTIONUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPDIRECTIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"

auto GeographicMapDirectionUtil::instance_owner() -> GeographicMapDirectionUtil* { static std::unique_ptr<GeographicMapDirectionUtil> value(new GeographicMapDirectionUtil()); return value.get(); }
GeographicMapDirectionUtil* GeographicMapDirectionUtil::instance = GeographicMapDirectionUtil::instance_owner();

    auto GeographicMapDirectionUtil::getInstance() -> GeographicMapDirectionUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GeographicMapDirectionUtil::instance;
    
}


GeographicMapDirectionUtil::GeographicMapDirectionUtil(){
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapDirectionUtil::getDirectionFromCellPositionToAdjacentCellPosition(GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition) -> Direction*{

    int32_t fromColumn = fromGeographicMapCellPosition->getColumn();;
    

    int32_t fromRow = fromGeographicMapCellPosition->getRow();;
    

    int32_t goColumn = toGeographicMapCellPosition->getColumn();;
    

    int32_t goRow = toGeographicMapCellPosition->getRow();;
    

    DirectionFactory* directionFactory = DirectionFactory::getInstance();;
    

                        if(fromColumn -1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn +1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->RIGHT;
    

                                    }
                                
                             else 
                        if(fromRow -1 == goRow)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->UP;
    

                                    }
                                
                             else 
                        if(fromRow +1 == goRow)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->DOWN;
    

                                    }
                                
                             else 
                        if(fromGeographicMapCellPosition == toGeographicMapCellPosition)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->NO_DIRECTION;
    

                                    }
                                
                             else 
                        if(fromRow == goRow && fromColumn == goColumn)
                        
                                    {
                                    


                            throw Exception(this->MESSAGE);
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->NOT_BORDERED_WITH;
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapDirectionUtil::getEightDirectionFromCellPositionToAdjacentCellPosition(GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition) -> Direction*{

    int32_t fromColumn = fromGeographicMapCellPosition->getColumn();;
    

    int32_t fromRow = fromGeographicMapCellPosition->getRow();;
    

    int32_t goColumn = toGeographicMapCellPosition->getColumn();;
    

    int32_t goRow = toGeographicMapCellPosition->getRow();;
    

    DirectionFactory* directionFactory = DirectionFactory::getInstance();;
    

                        if(fromRow == goRow)
                        
                                    {
                                    
                        if(fromColumn -1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn +1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->RIGHT;
    

                                    }
                                

                                    }
                                
                             else 
                        if(fromRow -1 == goRow)
                        
                                    {
                                    
                        if(fromColumn == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->UP;
    

                                    }
                                

                        if(fromColumn -1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->UP_LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn +1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->UP_RIGHT;
    

                                    }
                                

                                    }
                                
                             else 
                        if(fromRow +1 == goRow)
                        
                                    {
                                    
                        if(fromColumn == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->DOWN;
    

                                    }
                                

                        if(fromColumn -1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->DOWN_LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn +1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->DOWN_RIGHT;
    

                                    }
                                

                                    }
                                
                             else 
                        if(fromGeographicMapCellPosition == toGeographicMapCellPosition)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->NO_DIRECTION;
    

                                    }
                                
                             else 
                        if(fromRow == goRow && fromColumn == goColumn)
                        
                                    {
                                    


                            throw Exception(this->MESSAGE);
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->NOT_BORDERED_WITH;
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapDirectionUtil::getDirectionFromCellPositionToCellPosition(GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition) -> Direction*{

    int32_t fromColumn = fromGeographicMapCellPosition->getColumn();;
    

    int32_t fromRow = fromGeographicMapCellPosition->getRow();;
    

    int32_t goColumn = toGeographicMapCellPosition->getColumn();;
    

    int32_t goRow = toGeographicMapCellPosition->getRow();;
    

    DirectionFactory* directionFactory = DirectionFactory::getInstance();;
    

                        if(fromColumn > goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn < goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->RIGHT;
    

                                    }
                                
                             else 
                        if(fromRow > goRow)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->UP;
    

                                    }
                                
                             else 
                        if(fromRow < goRow)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->DOWN;
    

                                    }
                                

    StringMaker* stringMaker = new StringMaker();;
    

    std::string string = stringMaker->append(CellPosition::toStringCellPosition(fromGeographicMapCellPosition))->append(" == ")->append(CellPosition::toStringCellPosition(toGeographicMapCellPosition))->toString();;
    
stringMaker->delete_(0, stringMaker->length());
    



                            throw Exception(stringMaker->append("Error: ")->append(string)->toString());
                    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapDirectionUtil::getEightDirectionFromCellPositionToCellPosition(GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition) -> Direction*{

    int32_t fromColumn = fromGeographicMapCellPosition->getColumn();;
    

    int32_t fromRow = fromGeographicMapCellPosition->getRow();;
    

    int32_t goColumn = toGeographicMapCellPosition->getColumn();;
    

    int32_t goRow = toGeographicMapCellPosition->getRow();;
    

    DirectionFactory* directionFactory = DirectionFactory::getInstance();;
    

                        if(fromGeographicMapCellPosition == toGeographicMapCellPosition)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->NO_DIRECTION;
    

                                    }
                                
                             else 
                        if(fromRow == goRow)
                        
                                    {
                                    
                        if(fromColumn > goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn < goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->RIGHT;
    

                                    }
                                

                                    }
                                
                             else 
                        if(fromRow > goRow)
                        
                                    {
                                    
                        if(fromColumn > goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->UP_LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn < goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->UP_RIGHT;
    

                                    }
                                
                             else 
                        if(fromColumn == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->UP;
    

                                    }
                                

                                    }
                                
                             else 
                        if(fromRow < goRow)
                        
                                    {
                                    
                        if(fromColumn > goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->DOWN_LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn < goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->DOWN_RIGHT;
    

                                    }
                                
                             else 
                        if(fromColumn == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory->DOWN;
    

                                    }
                                

                                    }
                                

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->ERROR);
    
stringBuffer->append(CellPosition::toStringCellPosition(fromGeographicMapCellPosition));
    
stringBuffer->append(this->EQUAL);
    
stringBuffer->append(CellPosition::toStringCellPosition(toGeographicMapCellPosition));
    



                            throw Exception(stringBuffer->toString());
                    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPDIRECTIONUTIL_CPP
