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
  unsigned char	team_id = 0;
  unsigned char	status = 0;

  signed long int acceleration = 0;
  signed long int position = 0;
  signed long int velocity = 0;
  signed long int battery_voltage = 0;
  signed long int battery_current = 0;
  signed long int battery_temperature = 0;

  unsigned long int stripe_count = 0;
};
