void ANN(){
    
    // ANN with serial inpout for testing 
    if (Serial.available()) {
        double features[4];

        for (int i = 0; i < 4; i++) {
            // split features on comma (,)
            String feature = Serial.readStringUntil(',');

            features[i] = atof(feature.c_str());
        }

        Serial.print("Detected species: ");
        Serial.println(classIdxToName(predict(features)));
    }

}