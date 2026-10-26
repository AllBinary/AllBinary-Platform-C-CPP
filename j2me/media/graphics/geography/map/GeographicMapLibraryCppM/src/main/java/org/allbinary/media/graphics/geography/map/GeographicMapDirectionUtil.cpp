
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
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellPosition.h"

class GeographicMapDirectionUtil
            : public Object
         {

    private: static GeographicMapDirectionUtil instance() { return GeographicMapDirectionUtil(); }

    public: static GeographicMapDirectionUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GeographicMapDirectionUtil::instance();
    
}


private: GeographicMapDirectionUtil(){
}


    private: const std::string MESSAGE = "Cell Position should have been cached!!!";

                //@Throws(Exception.constructor)
            
    public: Direction getDirectionFromCellPositionToAdjacentCellPosition(GeographicMapCellPosition fromGeographicMapCellPosition, GeographicMapCellPosition toGeographicMapCellPosition){

    int32_t fromColumn = fromGeographicMapCellPosition.getColumn();;
    

    int32_t fromRow = fromGeographicMapCellPosition.getRow();;
    

    int32_t goColumn = toGeographicMapCellPosition.getColumn();;
    

    int32_t goRow = toGeographicMapCellPosition.getRow();;
    

    DirectionFactory directionFactory = DirectionFactory::getInstance();;
    

                        if(fromColumn -1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn +1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.RIGHT;
    

                                    }
                                
                             else 
                        if(fromRow -1 == goRow)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.UP;
    

                                    }
                                
                             else 
                        if(fromRow +1 == goRow)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.DOWN;
    

                                    }
                                
                             else 
                        if(fromGeographicMapCellPosition == toGeographicMapCellPosition)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.NO_DIRECTION;
    

                                    }
                                
                             else 
                        if(fromRow == goRow && fromColumn == goColumn)
                        
                                    {
                                    


                            throw Exception(this->MESSAGE);
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.NOT_BORDERED_WITH;
    
}


                //@Throws(Exception.constructor)
            
    public: Direction getEightDirectionFromCellPositionToAdjacentCellPosition(GeographicMapCellPosition fromGeographicMapCellPosition, GeographicMapCellPosition toGeographicMapCellPosition){

    int32_t fromColumn = fromGeographicMapCellPosition.getColumn();;
    

    int32_t fromRow = fromGeographicMapCellPosition.getRow();;
    

    int32_t goColumn = toGeographicMapCellPosition.getColumn();;
    

    int32_t goRow = toGeographicMapCellPosition.getRow();;
    

    DirectionFactory directionFactory = DirectionFactory::getInstance();;
    

                        if(fromRow == goRow)
                        
                                    {
                                    
                        if(fromColumn -1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn +1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.RIGHT;
    

                                    }
                                

                                    }
                                
                             else 
                        if(fromRow -1 == goRow)
                        
                                    {
                                    
                        if(fromColumn == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.UP;
    

                                    }
                                

                        if(fromColumn -1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.UP_LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn +1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.UP_RIGHT;
    

                                    }
                                

                                    }
                                
                             else 
                        if(fromRow +1 == goRow)
                        
                                    {
                                    
                        if(fromColumn == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.DOWN;
    

                                    }
                                

                        if(fromColumn -1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.DOWN_LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn +1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.DOWN_RIGHT;
    

                                    }
                                

                                    }
                                
                             else 
                        if(fromGeographicMapCellPosition == toGeographicMapCellPosition)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.NO_DIRECTION;
    

                                    }
                                
                             else 
                        if(fromRow == goRow && fromColumn == goColumn)
                        
                                    {
                                    


                            throw Exception(this->MESSAGE);
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.NOT_BORDERED_WITH;
    
}


                //@Throws(Exception.constructor)
            
    public: Direction getDirectionFromCellPositionToCellPosition(GeographicMapCellPosition fromGeographicMapCellPosition, GeographicMapCellPosition toGeographicMapCellPosition){

    int32_t fromColumn = fromGeographicMapCellPosition.getColumn();;
    

    int32_t fromRow = fromGeographicMapCellPosition.getRow();;
    

    int32_t goColumn = toGeographicMapCellPosition.getColumn();;
    

    int32_t goRow = toGeographicMapCellPosition.getRow();;
    

    DirectionFactory directionFactory = DirectionFactory::getInstance();;
    

                        if(fromColumn > goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn < goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.RIGHT;
    

                                    }
                                
                             else 
                        if(fromRow > goRow)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.UP;
    

                                    }
                                
                             else 
                        if(fromRow < goRow)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.DOWN;
    

                                    }
                                

    StringMaker stringMaker = StringMaker();;
    

    std::string string = stringMaker.append(CellPosition::toStringCellPosition(fromGeographicMapCellPosition)).append(" == ").append(CellPosition::toStringCellPosition(toGeographicMapCellPosition)).toString();;
    
stringMaker.delete(0, stringMaker.length());
    



                            throw Exception(stringMaker.append("Error: ").append(string).toString());
                    
}


    private: const std::string ERROR = "Error: ";

    private: const std::string EQUAL = " == ";

                //@Throws(Exception.constructor)
            
    public: Direction getEightDirectionFromCellPositionToCellPosition(GeographicMapCellPosition fromGeographicMapCellPosition, GeographicMapCellPosition toGeographicMapCellPosition){

    int32_t fromColumn = fromGeographicMapCellPosition.getColumn();;
    

    int32_t fromRow = fromGeographicMapCellPosition.getRow();;
    

    int32_t goColumn = toGeographicMapCellPosition.getColumn();;
    

    int32_t goRow = toGeographicMapCellPosition.getRow();;
    

    DirectionFactory directionFactory = DirectionFactory::getInstance();;
    

                        if(fromGeographicMapCellPosition == toGeographicMapCellPosition)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.NO_DIRECTION;
    

                                    }
                                
                             else 
                        if(fromRow == goRow)
                        
                                    {
                                    
                        if(fromColumn > goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn < goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.RIGHT;
    

                                    }
                                

                                    }
                                
                             else 
                        if(fromRow > goRow)
                        
                                    {
                                    
                        if(fromColumn > goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.UP_LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn < goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.UP_RIGHT;
    

                                    }
                                
                             else 
                        if(fromColumn == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.UP;
    

                                    }
                                

                                    }
                                
                             else 
                        if(fromRow < goRow)
                        
                                    {
                                    
                        if(fromColumn > goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.DOWN_LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn < goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.DOWN_RIGHT;
    

                                    }
                                
                             else 
                        if(fromColumn == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory.DOWN;
    

                                    }
                                

                                    }
                                

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->ERROR);
    
stringBuffer.append(CellPosition::toStringCellPosition(fromGeographicMapCellPosition));
    
stringBuffer.append(this->EQUAL);
    
stringBuffer.append(CellPosition::toStringCellPosition(toGeographicMapCellPosition));
    



                            throw Exception(stringBuffer.toString());
                    
}


};

            

