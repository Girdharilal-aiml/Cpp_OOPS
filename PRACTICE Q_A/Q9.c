/*
1. Design a class named BoardMarker with the following attributes:
   - Company (e.g., Dollar)
   - Color (e.g., black, red)
   - Refillable (Boolean – specifies if the marker can be refilled)
   - Ink status (Boolean – indicates whether the ink is empty)

   Implement appropriate getters and setters for these attributes.

   Methods:
   - write():
     Check if the ink is empty before allowing writing.
     If ink is empty, display a message indicating writing is not possible.
     Otherwise, proceed with writing.

   - refill():
     Verify if the marker is refillable.
     If it is, refill the ink and update ink status.
     Otherwise, display a message that the marker cannot be refilled.

   Demonstrate the functionality by creating 3 instances of BoardMarker,
   setting attribute values, and calling the methods.
*/

