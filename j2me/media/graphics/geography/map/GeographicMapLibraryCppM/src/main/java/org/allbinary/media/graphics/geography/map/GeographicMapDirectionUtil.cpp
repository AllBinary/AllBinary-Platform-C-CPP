
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellPosition.h"

class GeographicMapDirectionUtil
            : public Object
         {
        

    private: static const instance: GeographicMapDirectionUtil = new GeographicMapDirectionUtil();

    public static GeographicMapDirectionUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GeographicMapDirectionUtil.instance;
    
}


private constructor (){

            super();
        }


    private: const MESSAGE: string = "Cell Position should have been cached!!!";

                //@Throws(Exception.constructor)
            
    public Direction getDirectionFromCellPositionToAdjacentCellPosition(GeographicMapCellPosition fromGeographicMapCellPosition, GeographicMapCellPosition toGeographicMapCellPosition){

    fromColumn: int32_t = fromGeographicMapCellPosition!.getColumn()!;;
    

    fromRow: int32_t = fromGeographicMapCellPosition!.getRow()!;;
    

    goColumn: int32_t = toGeographicMapCellPosition!.getColumn()!;;
    

    goRow: int32_t = toGeographicMapCellPosition!.getRow()!;;
    

    directionFactory: DirectionFactory = DirectionFactory.getInstance()!;;
    

                        if(fromColumn -1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn +1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.RIGHT;
    

                                    }
                                
                             else 
                        if(fromRow -1 == goRow)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.UP;
    

                                    }
                                
                             else 
                        if(fromRow +1 == goRow)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.DOWN;
    

                                    }
                                
                             else 
                        if(fromGeographicMapCellPosition == toGeographicMapCellPosition)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.NO_DIRECTION;
    

                                    }
                                
                             else 
                        if(fromRow == goRow && fromColumn == goColumn)
                        
                                    {
                                    


                            throw new Exception(this.MESSAGE);
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.NOT_BORDERED_WITH;
    
}


                //@Throws(Exception.constructor)
            
    public Direction getEightDirectionFromCellPositionToAdjacentCellPosition(GeographicMapCellPosition fromGeographicMapCellPosition, GeographicMapCellPosition toGeographicMapCellPosition){

    fromColumn: int32_t = fromGeographicMapCellPosition!.getColumn()!;;
    

    fromRow: int32_t = fromGeographicMapCellPosition!.getRow()!;;
    

    goColumn: int32_t = toGeographicMapCellPosition!.getColumn()!;;
    

    goRow: int32_t = toGeographicMapCellPosition!.getRow()!;;
    

    directionFactory: DirectionFactory = DirectionFactory.getInstance()!;;
    

                        if(fromRow == goRow)
                        
                                    {
                                    
                        if(fromColumn -1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn +1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.RIGHT;
    

                                    }
                                

                                    }
                                
                             else 
                        if(fromRow -1 == goRow)
                        
                                    {
                                    
                        if(fromColumn == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.UP;
    

                                    }
                                

                        if(fromColumn -1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.UP_LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn +1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.UP_RIGHT;
    

                                    }
                                

                                    }
                                
                             else 
                        if(fromRow +1 == goRow)
                        
                                    {
                                    
                        if(fromColumn == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.DOWN;
    

                                    }
                                

                        if(fromColumn -1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.DOWN_LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn +1 == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.DOWN_RIGHT;
    

                                    }
                                

                                    }
                                
                             else 
                        if(fromGeographicMapCellPosition == toGeographicMapCellPosition)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.NO_DIRECTION;
    

                                    }
                                
                             else 
                        if(fromRow == goRow && fromColumn == goColumn)
                        
                                    {
                                    


                            throw new Exception(this.MESSAGE);
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.NOT_BORDERED_WITH;
    
}


                //@Throws(Exception.constructor)
            
    public Direction getDirectionFromCellPositionToCellPosition(GeographicMapCellPosition fromGeographicMapCellPosition, GeographicMapCellPosition toGeographicMapCellPosition){

    fromColumn: int32_t = fromGeographicMapCellPosition!.getColumn()!;;
    

    fromRow: int32_t = fromGeographicMapCellPosition!.getRow()!;;
    

    goColumn: int32_t = toGeographicMapCellPosition!.getColumn()!;;
    

    goRow: int32_t = toGeographicMapCellPosition!.getRow()!;;
    

    directionFactory: DirectionFactory = DirectionFactory.getInstance()!;;
    

                        if(fromColumn > goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn < goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.RIGHT;
    

                                    }
                                
                             else 
                        if(fromRow > goRow)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.UP;
    

                                    }
                                
                             else 
                        if(fromRow < goRow)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.DOWN;
    

                                    }
                                

    stringMaker: StringMaker = new StringMaker();;
    

    string: string = stringMaker!.append(CellPosition.toStringCellPosition(fromGeographicMapCellPosition))!.append(" == ")!.append(CellPosition.toStringCellPosition(toGeographicMapCellPosition))!.toString()!;;
    
stringMaker!.delete(0, stringMaker!.length());
    



                            throw new Exception(stringMaker!.append("Error: ")!.append(string)!.toString());
                    
}


    private: const ERROR: string = "Error: ";

    private: const EQUAL: string = " == ";

                //@Throws(Exception.constructor)
            
    public Direction getEightDirectionFromCellPositionToCellPosition(GeographicMapCellPosition fromGeographicMapCellPosition, GeographicMapCellPosition toGeographicMapCellPosition){

    fromColumn: int32_t = fromGeographicMapCellPosition!.getColumn()!;;
    

    fromRow: int32_t = fromGeographicMapCellPosition!.getRow()!;;
    

    goColumn: int32_t = toGeographicMapCellPosition!.getColumn()!;;
    

    goRow: int32_t = toGeographicMapCellPosition!.getRow()!;;
    

    directionFactory: DirectionFactory = DirectionFactory.getInstance()!;;
    

                        if(fromGeographicMapCellPosition == toGeographicMapCellPosition)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.NO_DIRECTION;
    

                                    }
                                
                             else 
                        if(fromRow == goRow)
                        
                                    {
                                    
                        if(fromColumn > goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn < goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.RIGHT;
    

                                    }
                                

                                    }
                                
                             else 
                        if(fromRow > goRow)
                        
                                    {
                                    
                        if(fromColumn > goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.UP_LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn < goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.UP_RIGHT;
    

                                    }
                                
                             else 
                        if(fromColumn == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.UP;
    

                                    }
                                

                                    }
                                
                             else 
                        if(fromRow < goRow)
                        
                                    {
                                    
                        if(fromColumn > goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.DOWN_LEFT;
    

                                    }
                                
                             else 
                        if(fromColumn < goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.DOWN_RIGHT;
    

                                    }
                                
                             else 
                        if(fromColumn == goColumn)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return directionFactory!.DOWN;
    

                                    }
                                

                                    }
                                

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.ERROR);
    
stringBuffer!.append(CellPosition.toStringCellPosition(fromGeographicMapCellPosition));
    
stringBuffer!.append(this.EQUAL);
    
stringBuffer!.append(CellPosition.toStringCellPosition(toGeographicMapCellPosition));
    



                            throw new Exception(stringBuffer!.toString());
                    
}


};

            

