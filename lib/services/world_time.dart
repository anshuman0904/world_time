import 'package:flutter/material.dart';
import 'package:http/http.dart';
import 'dart:convert';
import 'package:intl/intl.dart';

class WorldTime {
  String location="";
  String time="";
  String flag="";
  String url="";
  bool isDaytime=true;

  WorldTime({ required this.location, required this.flag, required this.url });

  Future<void> getTime() async {
    try {
      Response response = await get(
          Uri.parse('http://worldtimeapi.org/api/timezone/$url'));
      Map data = jsonDecode(response.body);

      DateTime datetime = DateTime.parse(data['datetime']);
      String offset = data['utc_offset'].substring(0, 3);
      String mins = data['utc_offset'].substring(4, 6);

      datetime = datetime.add(
          Duration(hours: int.parse(offset), minutes: int.parse(mins)));

      isDaytime = (datetime.hour > 6 && datetime.hour<18) ? true : false;

      time = DateFormat.jm().format(datetime);
    }
    catch (e) {
      time = "unable to get data";
    }
  }
}
