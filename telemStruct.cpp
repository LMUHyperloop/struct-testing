/**
Data Outputs and Data Types required by SpaceX

  team_id = UINT8
  Status = UINT8
  Acceleration = INT32
  Position = INT32
  Velocity = INT32
  battery_voltage = INT32
  battery_current = INT32
  battery_temperature = INT32
  stripe_count = UINT32
**/

struct telemStruct {
  unsigned char	team_id;
  unsigned char	status;

  signed long int acceleration;
  signed long int position;
  signed long int velocity;
  signed long int battery_voltage;
  signed long int battery_current;
  signed long int battery_temperature;

  unsigned long int stripe_count;
};
