
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoresInterface.h"
#include "HighScore.h"

class HighScores
            : public Object
        : public HighScoresInterface {
        

    private: orderedHighScoresList: BasicArrayList = new BasicArrayListD();

    private: const name: string;

    private: const heading: string;

    private: const columnOneHeading: string = "Name";

    private: const columnTwoHeading: string;

public constructor (string name, string heading, string columnTwoHeading){

            super();
        this.name= name;
    
this.heading= heading;
    
this.columnTwoHeading= columnTwoHeading;
    
}


    public setList(BasicArrayList orderedHighScoresList){
this.orderedHighScoresList= orderedHighScoresList;
    
}


    public BasicArrayList getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.orderedHighScoresList;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public int32_t getTotal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getList()!.size();;
    
}


    public addHighScore(HighScore newHighScore){
this.orderedHighScoresList!.add(newHighScore);
    
}


    public string getHeading(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.heading;
    
}


    public string getColumnOneHeading(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.columnOneHeading;
    
}


    public string getColumnTwoHeading(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.columnTwoHeading;
    
}


                //@Throws(Exception.constructor)
            
    public bool isBestScore(HighScore newHighScore){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("HighScores: ");
    
stringBuffer!.append(this.heading);
    
stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
stringBuffer!.append(CommonLabels.getInstance()!.TOTAL_LABEL);
    
stringBuffer!.appendint(this.orderedHighScoresList!.size());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

