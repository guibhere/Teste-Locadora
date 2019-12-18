-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `mydb` DEFAULT CHARACTER SET utf8 ;
USE `mydb` ;

-- -----------------------------------------------------
-- Table `mydb`.`diretor`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`diretor` (
  `idDiretor` INT(11) NOT NULL AUTO_INCREMENT,
  `nome` VARCHAR(45) NULL DEFAULT NULL,
  PRIMARY KEY (`idDiretor`))
ENGINE = InnoDB
AUTO_INCREMENT = 1
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `mydb`.`filme`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`filme` (
  `idFilme` INT(11) NOT NULL AUTO_INCREMENT,
  `titulo` VARCHAR(45) NULL DEFAULT NULL,
  `Diretor_idDiretor` INT(11) NOT NULL,
  PRIMARY KEY (`idFilme`, `Diretor_idDiretor`),
  UNIQUE INDEX `idFilme_UNIQUE` (`idFilme` ASC) VISIBLE,
  INDEX `fk_Filme_Diretor_idx` (`Diretor_idDiretor` ASC) VISIBLE,
  CONSTRAINT `fk_Filme_Diretor`
    FOREIGN KEY (`Diretor_idDiretor`)
    REFERENCES `mydb`.`diretor` (`idDiretor`))
ENGINE = InnoDB
AUTO_INCREMENT = 1
DEFAULT CHARACTER SET = utf8;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;

use mydb;

insert into diretor values(0,"Quentin Tarantino");
insert into diretor values(0,"Martin Scorsese");
insert into diretor values(0,"Peter Jackson");
insert into diretor values(0,"Steven Spielberg");
insert into diretor values(0,"George Lucas");
insert into diretor values(0,"James Cameron");

select * from diretor;
insert into filme values(0,"Pulp Fiction",1);
insert into filme values(0,"Kill Bill Vol. I",1);
insert into filme values(0,"Kill Bill Vol. II",1);
insert into filme values(0,"Once Upon a Time in Hollywood",1);

insert into filme values(0,"The Wolf of Wall Street",2);
insert into filme values(0,"The Aviator",2);
insert into filme values(0,"Taxi Driver",2);
insert into filme values(0,"The Irishman",2);

insert into filme values(0,"O Senhor dos Aneis 1",3);
insert into filme values(0,"O Senhor dos Aneis 2",3);
insert into filme values(0,"O Senhor dos Aneis 3",3);

insert into filme values(0,"Et",4);
insert into filme values(0,"Jurassic Park",4);


insert into filme values(0,"Star Wars 1",5);
insert into filme values(0,"Star Wars 2",5);
insert into filme values(0,"Star Wars 3",5);
insert into filme values(0,"Star Wars 4",5);
insert into filme values(0,"Star Wars 5",5);
insert into filme values(0,"Star Wars 6",5);

insert into filme values(0,"Avatar",6);
insert into filme values(0,"Titanic",6);